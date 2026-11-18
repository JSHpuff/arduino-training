const int LED = 12;
const int SENSOR = A0;

const float GAMMA = 0.7;
const float RL10 = 50;

int sen_val = 0;
float volt = 0.0;
float resist = 0.0;
float lux = 0.0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(SENSOR, INPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  sen_val =  analogRead(A0);
  volt = sen_val / 1024.0 * 5.0;
  resist = 2000 * volt / (1 - volt / 5);
  lux = pow(RL10 * 1e3 * pow(10, GAMMA) / resist, (1 / GAMMA));

  Serial.println(lux);

  if (lux < 400)
  {
    digitalWrite(LED, HIGH);
  }
  else
  {
    digitalWrite(LED, LOW);
  }

}
