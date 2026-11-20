const int LED = 13;
const int BTN = 8;

int pressed = 0;
int led_state = LOW;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
  pinMode(BTN, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  pressed = digitalRead(BTN);

  if (pressed)
  {
    led_state = LOW;
  }
  else
  {
    led_state = HIGH;
  }

  digitalWrite(LED, led_state);
  Serial.println(led_state);

  delay(10);

}
