
//Маркеры памяти
//void - пустота - космос - ничего - не использует память
//int  - интеджер - целое - память для чисел 12345
//char - символы - буквы
//long - для всего
//------setup - Название
//------() - круглые скобки (SHIFT+9, SHIFT+0) настройки
//------{} - фигурные скобки (SHIFT+Х, SHIFT+Ъ) Начало и конец
//Сложных приказов
#define BUTTON_PIN 7
int lastButtonState;
//-----------------------------------------
#include <TM1637.h>

// Pin 2 — > CLK, Pin 3 — > DIO
TM1637 tm1637(2, 3);
tm1637.init();  // инициализируем библиотеку
  tm1637.setBrightness(5);  // устанавливаем яркость дисплея
//----------------------------------------------------------
// способности 
// проверить нажатие кнопки 
void knop (){
  // прочитать значение кнопки
    int buttonState = digitalRead(BUTTON_PIN);
    if (lastButtonState != buttonState) {  // состояние изменилось
        delay(50);  // время дребезга
        if (buttonState == LOW)
            Serial.println("Нажатие кнопки");
        else
            Serial.println("Отпускание кнопки");
        lastButtonState = buttonState;
    }
}
// зажечь светодиод  
void svet1 () {
digitalWrite(13, 1);  // зажигаем светодиод [1](https://arduino.ru/tutorials/blink)
  delay(1000);  // ждём секунду [1](https://arduino.ru/tutorials/blink)
  
}
// потушать светодиод 
void svet0 () {
  digitalWrite(13, LOW);  // выключаем светодиод [1](https://arduino.ru/tutorials/blink)
  delay(1000);  // ждём секунду [1](https://arduino.ru/tutorials/blink)
}
// издать сигнал 
void sig () {
    tone(3, 1000);  // пищать на пине 3, 1 кГц
    delay(500);
    noTone(3);  // не пищать
    delay(500);
}
// вывести число на экран tm1637
void ecran () {
  // выводим число
  tm1637.dispNumber(2020);
}

void setup() {       //-слэш - разрез /слэш в гору \слэш с горы
  Serial.begin(9600);
    pinMode(BUTTON_PIN, INPUT_PULLUP);  // включить внутренний подтягивающий резистор
    lastButtonState = digitalRead(BUTTON_PIN);
  //-------------------------------------------------------------
  pinMode(13, OUTPUT);  // Инициализируем цифровой вход/выход в режиме выхода. [1](https://arduino.ru/tutorials/blink)
  // Выход 13 на большинстве плат Arduino подключен к светодиоду на плате. [1](https://arduino.ru/tutorials/blink)
  //-----------------------------------------------------
 tm1637.init();  // инициализируем библиотеку
  tm1637.setBrightness(5);  // устанавливаем яркость дисплея
  //---------------------------------------------------------------------

}

void loop() {
 

}
