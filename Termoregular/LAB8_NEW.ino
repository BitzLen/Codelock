// Библиотеки
#include <M2M_LM75A.h> // Подключаем библиотеку для работы с LM75A

// Глобальные переменные
#define fan PA1 // PA1
#define R PB9 // PB9
#define G PB8 // PB8
#define B PB1 // PB1
#define SW1 PC15 // PC14 или PC15
#define beep PA8 // PA8
#define but PB4 // PB4
#define SW2 PC14 // PC14 или PC15

M2M_LM75A lm75a; // Подключение класса датчика 

void setup()
{
    tone(beep, 100 * 25, 50); // Сигнализация
    delay(200);
    tone(beep, 100 * 25, 50); // Сигнализация
    lm75a.begin(); // Инициализация работы датчика
    Serial.begin(115200); // Инициализация работы UART
    Serial.println(F("M2M_LM75A - Basic usage"));
    Serial.println(F("==========================================="));
    Serial.println("");
    pinMode(R, OUTPUT); // Красный на выход
    pinMode(G, OUTPUT); // Зеленый на выход
    pinMode(B, OUTPUT); // Синий на выход
    pinMode(fan, OUTPUT); // Вентилятор на выход
    pinMode(beep, OUTPUT); // Бипер на выход
    pinMode(PC13, OUTPUT); // PC13 на выход

    pinMode(SW1, INPUT); // Свитч на вход
}

void loop(){

    double temp = lm75a.getTemperature(); // Считывание температуры с LM75A
    int rpm = (125*(temp-35)); // Задаем уровень ШИМ для вентилятора

    if (rpm<55){ // Если ШИМ ниже 55
        rpm=0; // Обнуляем ШИМ
    }

    delay (1000); // Глобальная задержка в 1 секунду

    if(digitalRead (SW1)){ //Если свитч включен
        digitalWrite (PC13, HIGH); // Зажигаем PC13

        if (temp >= 37){ // Если t>=37
            rpm=250; // Устанавливаем максимальную скорость
            analogWrite(R, 250); // Зажигаем красный светодио
            tone(beep, 100*25, 100); // Сигнализация
            analogWrite(B, 0); // Тушим синий
            analogWrite(G, 0); // Тушим зеленый
            analogWrite(fan, rpm); // Подаем ШИМ на вентилятор
            Serial.print(F("Скорость вентилятора: "));
            Serial.print(rpm);
            Serial.println(F(" RPM"));
        }

        else if (temp < 37){ // Если t<37
            analogWrite(B, 0); // Тушим синий
            analogWrite(R, 0); // Тушим красный
            analogWrite(G, 250); // Зажигаем зеленый
            analogWrite(fan, rpm); // Подаем ШИМ на вентилятор
           
            if (temp <=35) { // Если t<=35
                rpm=0; // ШИМ на 0
                analogWrite(fan, rpm); // Подаем ШИМ на вентилятор
                analogWrite(R, 0); // Тушим красный
                analogWrite(B, 250); // Зажигаем синий
                analogWrite(G, 0); // Тушим зеленый
            }

            Serial.print(F("Скорость вентилятора: "));
            Serial.print(rpm);
            Serial.println(F(" RPM"));
        }
  
    }
    else{ // Если свитч отключен
        analogWrite(fan, 0); //Выключаем вентилятор
        analogWrite(R, 0); //Тушим красный
        analogWrite(B, 0); // Тушим синий
        analogWrite(G, 0); // Тушим зеленый
        digitalWrite(PC13, LOW); // Тушим PC13
        Serial.print(F("Система охлаждения отключена "));
        Serial.print("");
        Serial.println(F(" "));
        delay (50); // Обязательная задержка
    }
    
    Serial.print(F("Температура: "));
    Serial.print(temp);
    Serial.println(F(" *C"));
}
