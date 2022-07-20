#define LED1 PB9 // красный светодиод
#define LED2 PB8 // зеленый светодиод
#define LED3 PB1 // синий светодиод
#define Cool PA1 // вентилятор 
#define zoom PA8 // Зуммер
#define NUM_KEYS 5 // количество знаков в пароле

const int val = 100; //Значение частоты сигнала
char myarraw[NUM_KEYS] = { '1','2','3','4','5' }; // массив с верным кодом
char button_pressed1[NUM_KEYS]; // Переменная хранящая считанный пароль
char button_pressed; // Переменная для считывания пароля из монитора порта

int k = 0; // Переменная для счетчика неправильных попыток
int schetchik = 1;
void setup() {
  pinMode(LED1, OUTPUT); // красный светодиод
  pinMode(LED2, OUTPUT); // зеленый светодиод
  pinMode(LED3, OUTPUT); // зеленый светодиод
  pinMode(Cool, OUTPUT); // реле управления замком
  Serial.begin(115200); // Подключение UART
  Serial.println("Для доступа в систему необходимо ввести 5-и значный пароль.");
  delay(1000);
}

bool strcheck(char* str1, char* str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') { // Цикл выполняется до тех пор, пока 
                                                 //не найдется хоть один конец строки

        if (str1[i] != str2[i]) // Сравниваем каждый i элемент массивов друг с другом
            return 0; // Если хоть один не совпал возвращаем False
        i++;
    }
    //Если мы вышли из цикла значит одну из строк мы перебрали до конца
    if (str1[i] == '\0' && str2[i] == '\0') // Проверяем на соответствие i элемента 
                                            //каждого массива элемента концу строки
        return 1; // Если совпало, возвращаем True
    return 0; // Не совпало, возвращаем False
}

void loop() {
    Serial.begin(115200); // Подключение UART
    digitalWrite(LED3, HIGH); // Зажигаем синий светодиод
    while (!(Serial.available() > NUM_KEYS)) {} // Ожидаем введение NUM_KEYS количества байт

    for (int i = 0; i < NUM_KEYS; i++) { // Открываем цикл по поличеству байт

        button_pressed = Serial.read(); // Забираем по 1 байту
        button_pressed1[i] = button_pressed; // Записываем по одному байту
        
    }
    Serial.println(button_pressed1); // Выводим принятцю информацию
    bool c =strcheck(myarraw, button_pressed1); // Сравниваем принятый пароль с установленным паролем

    if (c == 1) { // Условие выполняется при возврате True
        k = 0; // Обнуление счетчика
        schetchik = 1;
        Serial.println(); // Переход на новую строку
        Serial.println("Пароль верный."); // Вывод сообщения о правильности пароля
        digitalWrite(LED3, LOW); // Тушим синий светодиод
        digitalWrite(LED2, HIGH); // Зажигаем зеленый светодиод
        digitalWrite(Cool, HIGH); // Включаем мотор замка
        delay(1000); // Задержка
        digitalWrite(Cool, LOW); // Выключаем мотор замка
        while (1); // Цикл бесконечной истинности
    }

    else { // Иначе
        k++; // Инкремент счетчика
        if (k == 3) { // Если счетчик равен "", то
            Serial.println("В доступе отказано."); // Выводим сообщение о запрете доступа
            digitalWrite(LED3, LOW); // Тушим синий светодиод
            digitalWrite(LED2, LOW); //  Тушим зеленый светодиод
            digitalWrite(LED1, HIGH); // Зажигаем красный светодиод
            
            int l = 10* schetchik; // Счетчик секунд
            while (l >0) {
                l--;
                if (schetchik > 4) {
                    Serial.println();
                    Serial.print("Дверь заблокирована. Тревога!");
                    while (1) {
                        tone(zoom, val * 25);
                        delay(100);
                        tone(zoom, val * 50);
                        delay(100);
                    }
                }
                delay(1000);
                Serial.println();
                Serial.print("Дверь заблокированна на ");
                Serial.print(l);
                Serial.print(" с.");
                


                if (l == 0) {
                    k = 0;
                    

                    Serial.println();
                    Serial.print("Попробуйте снова. ");
                    Serial.println();
                    schetchik++;
                    break;
                }
            }; // Цикл бесконечной истинности
        }
        else Serial.println("Пароль не верный. Попробуйте снова."); // Иначе
        digitalWrite(LED3, LOW); // Тушим синий светодиод
        digitalWrite(LED2, LOW); // Тушим зеленый светодиод
        digitalWrite(LED1, HIGH); // Зажигаем красный светодиод
        Serial.end(); // Очищаем буффер UARTa
        delay(1000);  // Задержка в 2 секунды
    }

    
    digitalWrite(LED3, LOW); // Тушим синий светодиод
    digitalWrite(LED2, LOW); // Тушим зеленый светодиод
    digitalWrite(LED1, LOW); // Тушим красный светодиод
}

//void setup() {
//    Serial.begin(9600); // Инициализация передачи по последовательному интерфейсу со скоростью 115200 байт\с
//}
//
//uint8_t i = 0; //Создание глобальной переменной i
//void loop()
//{
//    //Serial.write(i); // Отправка значения, которое содержит переменная i по UART
//    for (int i = 0; i < 255;i++) { // Цикл, который меняет значение i от 0 до 255
//        delay(3000); // Ожидание в течении 3 секунд (3000 миллисекунд)
//        Serial.write(i);// Отправка значения, которое содержит переменная i по UART
//    }
//}
