#include <Arduino.h>
#include <Wire.h>

#include "SSD1306.h"

#define DISPLAY_ADDRESS 0x3C
#define DISPLAY_SDA_PIN D1
#define DISPLAY_SCL_PIN D2
SSD1306 display(DISPLAY_ADDRESS, DISPLAY_SDA_PIN, DISPLAY_SCL_PIN);

static void setupDisplay(void) {
    display.init();
    display.setFont(ArialMT_Plain_16);
    display.drawString(20, 20, "Hello World :)");
    display.display();
}

static void writeToScreen(const char * str) {
    display.clear();
    display.drawString(2, 2, str);
    display.display();
}

void setup() {
    Serial.begin(115200);
    setupDisplay();
}

void loop() {
    delay(2000);
    writeToScreen("Hello world 2");
}
