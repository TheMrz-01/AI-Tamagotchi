#define BUTPIN 19
#define BUZPIN 18

int BUT_VALUE = 0;
int BUZ_DUR = 50;
int BUZ_TONE_1 = 440;

void setup() {
  pinMode(BUTPIN,INPUT);
  //pinMode(BUZPIN,OUTPUT);
  Serial.begin(9600);
  Serial.println("BUT deger");
}

void loop() {
  BUT_VALUE = digitalRead(BUTPIN);
  Serial.println(BUT_VALUE);

  tone(BUZPIN,BUZ_TONE_1);
  delay(BUZ_DUR);
  noTone(BUZPIN);
  delay(BUZ_DUR);

  /*if(BUT_VALUE){
    tone(BUZPIN,BUZ_TONE_1);
    delay(BUZ_DUR);
    noTone(BUZPIN);
    delay(BUZ_DUR);
  }*/
}
