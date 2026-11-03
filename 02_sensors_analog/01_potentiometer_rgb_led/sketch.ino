const int red = 9;
const int green = 10;
const int blue = 11;

const int read_r_pt = A0;
const int read_g_pt = A1;
const int read_b_pt = A2;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(read_r_pt, INPUT);
  pinMode(read_g_pt, INPUT);
  pinMode(read_b_pt, INPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  uint8_t duty_r = analogRead(read_r_pt) >> 2;
  uint8_t duty_g = analogRead(read_g_pt) >> 2;
  uint8_t duty_b = analogRead(read_b_pt) >> 2;

  Serial.print("R: ");
  Serial.print(duty_r);
  Serial.print("\tG: ");
  Serial.print(duty_g);
  Serial.print("\tB: ");
  Serial.println(duty_b);

  analogWrite(red, duty_r);
  analogWrite(green, duty_g);
  analogWrite(blue, duty_b);

  delay(50);
}
