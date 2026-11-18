const int BUZZER = 10;
const int KEYS[] = {2, 3, 4, 5, 6, 7, 8, 9};
const int NOTES[] = {262, 294, 330, 349, 392, 440, 494, 523};  // C4 到 C5
const char* NAMES[] = {"Do", "Re", "Mi", "Fa", "Sol", "La", "Si", "Do"};

const int N = sizeof(KEYS) / sizeof(int);

int playing = -1;
int pressed = -1;
 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println(N);
  for (int i = 0; i < N; i++)
  {
    pinMode(KEYS[i], INPUT_PULLUP);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < N; i++)
  {
    if (digitalRead(KEYS[i]) == LOW)
    {
      pressed = i;
    }
  }

  if (pressed != playing)
  {
    playing = pressed;
    if (playing >= 0)
    {
      tone(BUZZER, NOTES[playing]);
      Serial.println(NAMES[playing]);
    }
    else
    {
      noTone(BUZZER);
    }
  }

  pressed = -1;
}
