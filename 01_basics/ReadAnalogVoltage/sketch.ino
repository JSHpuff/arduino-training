#include <Arduino.h>

static const uint8_t ANALOG_PIN = A0;

void setup() {
    Serial.begin(115200);
}

void loop() {
    int sensor_value = analogRead(ANALOG_PIN);
    float voltage = sensor_value * (5.0 / 1024.0);
    Serial.println(voltage);
    delay(1);
}
