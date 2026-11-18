#include <Arduino.h>

static const uint8_t BUTTON_PIN = 2;

void setup() {
    Serial.begin(115200);
    pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
    int button_state = digitalRead(BUTTON_PIN);
    Serial.println(button_state);
    delay(1);
}
