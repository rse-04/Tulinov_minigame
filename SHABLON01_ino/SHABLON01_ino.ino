
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

// matrix= {
//   01,02,03,04,05,06,07,08
//   09,10,11,12,13,14,15,16
//   17,18,19,20,21,22,23,24
//   25,26,27,28,29,30,31,32
//   33,34,35,36,37,38,39,40
//   41,42,43,44,45,46,47,48
//   49,50,51,52,53,54,55,56
//   57,58,59,60,61,62,63,64

// }
void svet1 () {

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
    int s=0;
}
void loop(){
  //Триггеры
  //----------------------------
  //Состояния
  //   0. Ждать 
  if (s==1){

  }

  // 1. Игра
  if (s==2){
    //зажечь пиксель 1 или 2 с разной задержкой

    //проверяем нажатие, начисляем очки, меняем состояни 

  }
  
  // 2. Финал
   if (s==1){
    
  }
  
  // 3. Разржен
  if (s==1){
    
  }
  //----------------------------
}



