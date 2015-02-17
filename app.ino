#include "Adafruit_GFX.h"
#include "Adafruit_LEDBackpack.h"
#include "glcdfont.h"

Adafruit_8x8matrix matrix = Adafruit_8x8matrix();

void setup()   {
  Spark.function("displayData", boom);
  pinMode(A0, INPUT);
  Serial.begin(9600);
  matrix.begin(0x70);
}

void loop() {
}

int boom(String data) {
  for (int8_t x=0; x<9; x++) {
     matrix.clear();
     matrix.drawLine(x,0, x,7, LED_ON);
     matrix.writeDisplay();
     delay(100);
   }
}
