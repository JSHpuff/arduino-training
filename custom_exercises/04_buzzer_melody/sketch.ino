const int BUZ = 8;

int melody[] = {
 262, 262, 392, 392, 440, 440, 392,
 349, 349, 330, 330, 294, 294, 262
};

const int N = sizeof(melody) / sizeof(int);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < N; i++)
  {
    tone(BUZ, melody[i], 220);
    delay(220+50);
  }
  delay(1000);
}
