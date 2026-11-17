#include <Arduino.h>

static const uint8_t LED_PIN = 9;

static int brightness = 0;
static int fade_amount = 5;

void setup() {
    Serial.begin(115200);
    pinMode(LED_PIN, OUTPUT);
}

void loop() {
    analogWrite(LED_PIN, brightness);
    Serial.println(brightness);

    brightness += fade_amount;
    if (brightness <= 0 || brightness >= 255) {
        fade_amount = -fade_amount;
    }

    delay(10);
}
