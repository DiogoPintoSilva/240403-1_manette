/*
   Gamepad module provides three different mode namely Digital, JoyStick and Accerleometer.

   You can reduce the size of library compiled by enabling only those modules that you want to
   use. For this first define CUSTOM_SETTINGS followed by defining INCLUDE_modulename.

   Explore more on: https://thestempedia.com/docs/dabble/game-pad-module/
*/
#define CUSTOM_SETTINGS
#define INCLUDE_GAMEPAD_MODULE
#include <DabbleESP32.h>
#include <Arduino.h>
#include <M5Stack.h>

void setup() {
  Serial.begin(115200);           // make sure your Serial Monitor is also set at this baud rate.
  Dabble.begin("Diogo.P");        //set bluetooth name of your device
  M5.begin(115200);
  M5.Lcd.setCursor(90, 120);
  M5.Lcd.print("Up");
}

void loop() {
  Dabble.processInput();          //this function is used to refresh data obtained from smartphone.Hence calling this function is mandatory in order to get data properly from your mobile.
  Serial.print("KeyPressed: ");
  if (GamePad.isUpPressed())
  {
    Serial.print("Up");
    M5.Lcd.fillScreen(BLACK);
    M5.Lcd.setCursor(90, 120);
    M5.Lcd.setTextSize(3);
    M5.Lcd.print("Up");
  }

  if (GamePad.isDownPressed())
  {
    Serial.print("Down");
    M5.Lcd.fillScreen(BLACK);
    M5.Lcd.setCursor(90, 120);
    M5.Lcd.print("Down");
  }

  if (GamePad.isLeftPressed())
  {
    Serial.print("Left");
    M5.Lcd.fillScreen(BLACK);
    M5.Lcd.setCursor(90, 120);
    M5.Lcd.print("Left");
  }

  if (GamePad.isRightPressed())
  {
    Serial.print("Right");
    M5.Lcd.fillScreen(BLACK);
    M5.Lcd.setCursor(90, 120);
    M5.Lcd.print("Right");
  }

  if (GamePad.isSquarePressed())
  {
    Serial.print("Square");
    M5.Lcd.fillScreen(BLACK);
    M5.Lcd.setCursor(90, 120);
    M5.Lcd.print("Square");
  }

  if (GamePad.isCirclePressed())
  {
    Serial.print("Circle");
    M5.Lcd.fillScreen(BLACK);
    M5.Lcd.setCursor(90, 120);
    M5.Lcd.print("Circle");
  }

  if (GamePad.isCrossPressed())
  {
    Serial.print("Cross");
    M5.Lcd.fillScreen(BLACK);
    M5.Lcd.setCursor(90, 120);
    M5.Lcd.print("Cross");
  }

  if (GamePad.isTrianglePressed())
  {
    Serial.print("Triangle");
    M5.Lcd.fillScreen(BLACK);
    M5.Lcd.setCursor(90, 120);
    M5.Lcd.print("Triangle");
  }

  if (GamePad.isStartPressed())
  {
    Serial.print("Start");
    M5.Lcd.fillScreen(BLACK);
    M5.Lcd.setCursor(90, 120);
    M5.Lcd.print("Start");
  }

  if (GamePad.isSelectPressed())
  {
    Serial.print("Select");
    M5.Lcd.fillScreen(BLACK);
    M5.Lcd.setCursor(90, 120);
    M5.Lcd.print("Select");
  }
  Serial.print('\t');

  int a = GamePad.getAngle();
  Serial.print("Angle: ");
  Serial.print(a);
  Serial.print('\t');
  int b = GamePad.getRadius();
  Serial.print("Radius: ");
  Serial.print(b);
  Serial.print('\t');
  float c = GamePad.getXaxisData();
  Serial.print("x_axis: ");
  Serial.print(c);
  Serial.print('\t');
  float d = GamePad.getYaxisData();
  Serial.print("y_axis: ");
  Serial.println(d);
  Serial.println();
}