int led31 = 13; // trzeci palec (serdeczny) zielony
int led32 = 12; // biały
int led33 = 11; // niebieski
int led34 = 10; // czerwony
int led21 = 9;  // drugi palec (środkowy) zielony
int led22 = 8;  // biały
int led23 = 7;  // niebieski
int led24 = 6;  // czerwony
int led11 = 5;  // pierwszy palec (wskazujący) zielony
int led12 = 4;  // biały
int led13 = 3;  // niebieski
int led14 = 2;  // czerwony



void setup() {
  pinMode(led31, OUTPUT);
  pinMode(led32, OUTPUT);
  pinMode(led33, OUTPUT);
  pinMode(led34, OUTPUT);
  pinMode(led21, OUTPUT);
  pinMode(led22, OUTPUT);
  pinMode(led23, OUTPUT);
  pinMode(led24, OUTPUT);
  pinMode(led11, OUTPUT);
  pinMode(led12, OUTPUT);
  pinMode(led13, OUTPUT);
  pinMode(led14, OUTPUT);
}

void loop() {

  Intro();
  Chorus();
  Verse1();
  PreChorus();
  Chorus();
  Verse2();
  PreChorus();
  Chorus();
  delay(5000);

}

void Intro(){
  for (int i = 0; i < 4; i++){
  AkordC();
  AkordA();
  AkordEm();
  }
  delay(500);
}

void PreChorus(){
  AkordC();
  AkordA();
  AkordEm();
  AkordC();
  AkordA();
  AkordB7();
}

void Chorus(){
  for (int i = 0; i < 4; i++){
  AkordC();
  AkordA();
  AkordEm();
  }
}

void Verse1(){
  AkordA();
  delay(1000);
  AkordEm();
  delay(500);
  AkordA();
  delay(1000);
  AkordEm();
  delay(500);
}

void Verse2(){
  AkordA();
  delay(1000);
  AkordA();
  delay(1000);
  AkordEm();
  delay(500);
  AkordEm();
  delay(500);
}

void AkordC(){
  digitalWrite(led31, HIGH);
  for (int i = 0; i < 2; i++){
    digitalWrite(led32, HIGH);
    delay(500);
    digitalWrite(led32, LOW);
    delay(500);
  }
  digitalWrite(led31, LOW);
}

void AkordA(){
  digitalWrite(led24, HIGH);
  for (int i = 0; i < 2; i++){
    digitalWrite(led23, HIGH);
    delay(500);
    digitalWrite(led23, LOW);
    delay(500);
  }
  digitalWrite(led24, LOW);
}

void AkordEm(){
  digitalWrite(led11, HIGH);
  digitalWrite(led22, HIGH);
  digitalWrite(led33, HIGH);
  for (int i = 0; i < 3; i++){
    digitalWrite(led13, HIGH);
    digitalWrite(led31, HIGH);
    delay(500);
    digitalWrite(led13, LOW);
    digitalWrite(led31, LOW);
    delay(500);
  }
  digitalWrite(led11, LOW);
  digitalWrite(led22, LOW);
  digitalWrite(led33, LOW);
}

void AkordB7(){
  digitalWrite(led14, HIGH);
  digitalWrite(led22, HIGH);
  digitalWrite(led33, HIGH);
  for (int i = 0; i < 7; i++){
    digitalWrite(led13, HIGH);
    digitalWrite(led23, HIGH);
    digitalWrite(led32, HIGH);
    delay(500);
    digitalWrite(led13, LOW);
    digitalWrite(led23, LOW);
    digitalWrite(led32, LOW);
    delay(500);
  }
  digitalWrite(led14, LOW);
  digitalWrite(led22, LOW);
  digitalWrite(led33, LOW);
}
