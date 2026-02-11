#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

// OLED I2C address (most common is 0x3C)
#define OLED_ADDR 0x3C

// Create display object
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);


void setup() {
    Serial.begin(9600);

    // Initialize I2C OLED
    if (!display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR)) {
        Serial.println("OLED not found");
        while (true);
    }

    // Clear display
    display.clearDisplay();

    // Set text properties
    display.setTextSize(1);
    display.setTextColor(SSD1306_WHITE);

    // Display text
    display.setCursor(0, 0);
    display.println("Arduino UNO R4");
    display.println("OLED with I2C");
    display.println("Hello Students!");

    // Show on screen
    display.display();


// write your initialization code here
}

void loop() {
// write your code here
}