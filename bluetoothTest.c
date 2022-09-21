static int c2=65,    cs2=69,   d2=73,    ds2=78,   e2=82,    f2=87,    fs2=93,   g2=98,
 gs2=104,  a2=110,   b2=123,   c3=131,   cs3=139,  d3=147,   ds3=156,  e3=165,   f3=175,
 fs3=185,  g3=196,   gs3=208,  a3=220,   as3=233,  b3=247,   c4=262,   cs4=277,  d4=294,
 ds4=311,  e4=330,   f4=349,   fs4=370,  g4=392,   gs4=415,  a4=440,   as4=466,  b4=494,
 c5=523,   cs5=554,  d5=587,   ds5=622,  e5=659,   f5=698,   fs5=740,  g5=784,   gs5=831,
 a5=880,   as5=932,  b5=988,   c6=1047,  cs6=1109, d6=1175,  ds6=1245, e6=1319,  f6=1397,
 fs6=1480, g6= 1568, gs6=1661, a6=1760,  as6=1865, b6=1976,  c7= 2093, cs7=2217, d7=2349,
 ds7=2489, e7=2637,  f7=2794,  fs7=2960, g7= 3136, gs7=3322, a7= 3520, as7=3729, b7=3951,
 c8=4186,  cs8=4435, d8=4699,  ds8=4978;

int Qrt=250, Hf=500, full=1000;

int ledPin = 13;

int state = 0;

void Notes(int note, int notedrag, int pauseTime) {
    tone(8, note, notedrag);
    delay(notedrag + pauseTime);
}

void MusicScale() {
  Notes (c4,Hf,Hf);  Notes (d4,Hf,Hf);  Notes (e4,Hf,Hf);  Notes (f4,Hf,Hf);
  Notes (g4,Hf,Hf);  Notes (a4,Hf,Hf);  Notes (b4,Hf,Hf);  Notes (c5,Hf,Hf);
}

void melody() {
  Notes (d4,Hf,Hf);  Notes (a4,Hf,Hf);  Notes (gs4,Hf,Hf); Notes (g4,Hf,Hf);
  Notes (f4,Hf,Hf);  Notes (g4,Hf,Hf);  Notes (c4,Hf,Hf);  Notes (c5,Hf,Hf);
}

void bass() {
  Notes (f2,Hf,Hf);  Notes (f2,Hf,Hf);  Notes (f2,Hf,Hf);  Notes (f2,Hf,Hf);
  Notes (e2,Hf,Hf);  Notes (e2,Hf,Hf);  Notes (e2,Hf,Hf);  Notes (e2,Hf,Hf);
}
 
void setup() {
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin,LOW);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    state = Serial.read();
  }
  
  else if (state == '1') {
   melody();
  //bass();
  }

  else if (state == '2'){
    MusicScale
  }

  else {
  
  }
}
