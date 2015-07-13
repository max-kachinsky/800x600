//добавление библиотек
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <OneWire.h>
#include <DallasTemperature.h>

// Обьявляем глобальные переменные
#define ONE_WIRE_BUS 10                     // Шина для термометра
#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET);

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

void setup()   {                             //Класс настройки. выполняется в самом начале и только один раз
  Serial.begin(9600);                        //Активируем порт COM для вывода данных на компьютер
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C); //Активируем порты дисплея и указываем регистр
  display.clearDisplay();                    //Очищаем дисплей от шлака предидущего скетча (при его наличия)
  sensors.begin();                           //Стартуем термометр
}

void loop() {                               //Циклический класс. Выполняется после класса настройки и повторяется при завершении
  sensors.requestTemperatures();            // запрос данных от термометра
  display.setTextSize(1);                   // Устанавливаем шрифт
  display.setTextColor(WHITE);              // Цстанавливаем цвет текста
  display.setCursor(0,0);                   // Ставим курсор в начальное положение
  display.println("Hello, 800x600!");       // Печать текста
  display.setTextSize(2);                   // Шрифт
  display.println(sensors.getTempCByIndex(0)); // Выводим на дисплей показание термометра
  display.display();                           // Эта комманда "выплёвывает" все display.println на дисплей
  Serial.println(sensors.getTempCByIndex(0));  // Отправляем температуру на COM порт
  delay(500);                                  // Пауза
  display.clearDisplay();                      // очищаем дисплей для следующей отрисовки

}




 

