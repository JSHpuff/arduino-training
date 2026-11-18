const int TRIG = 10;
const int ECHO = 9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  long cm = pulseIn(ECHO, HIGH) / 58;
  Serial.println(cm);
  delay(1);
}
