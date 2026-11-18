#include <Arduino.h>

static const uint8_t LED_PIN = 13;
static const uint32_t BLINK_INTERVAL_MS = 1000;

static uint32_t last_toggle_time = 0;
static uint8_t led_state = LOW;

void setup() {
    pinMode(LED_PIN, OUTPUT);
    digitalWrite(LED_PIN, led_state);
}

void loop() {
    uint32_t current_time = millis();

    if (current_time - last_toggle_time >= BLINK_INTERVAL_MS) {
        last_toggle_time = current_time;
        led_state = (led_state == LOW) ? HIGH : LOW;
        digitalWrite(LED_PIN, led_state);
    }
}
