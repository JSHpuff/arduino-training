#include <Arduino.h>

static const uint8_t ANALOG_PIN = A0;

void setup() {
    Serial.begin(115200);
}

void loop() {
    int sensor_value = analogRead(ANALOG_PIN);
    Serial.println(sensor_value);
    delay(1);
}
