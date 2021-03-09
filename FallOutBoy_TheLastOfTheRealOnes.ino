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
  Verse();
  Chorus();
  Verse();
  Chorus();
  PreChorus();
  Chorus();

}
void Verse(){
  for (int i = 0; i < 4; i++){
  AkordA();
  AkordFooo();
  AkordD();
  AkordFooo();
  }
  AkordA();
  AkordA();
}

void Chorus(){
  for (int i = 0; i < 4; i++){
  AkordA();
  AkordFooo();
  AkordD();
  AkordFooo();
  }
  delay(1000);
}

void Intro(){
  ShortA();
  ShortF();
  ShortD();
  ShortF();
}

void PreChorus(){
  for (int i = 0; i < 4; i++){
  AkordFooo();
  AkordC();
  AkordA();
  AkordG();
  }
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

void AkordFooo(){
  digitalWrite(led24, HIGH);
  digitalWrite(led12, HIGH);
  for (int i = 0; i < 2; i++){
    digitalWrite(led23, HIGH);
    digitalWrite(led14, HIGH);
    delay(500);
    digitalWrite(led23, LOW);
    digitalWrite(led14, LOW);
    delay(500);
  }
  digitalWrite(led24, LOW);
  digitalWrite(led12, LOW);
}

void AkordD(){
  digitalWrite(led12, HIGH);
  digitalWrite(led24, HIGH);
  digitalWrite(led33, HIGH);
  for (int i = 0; i < 2; i++){
    digitalWrite(led11, HIGH);
    digitalWrite(led23, HIGH);
   
    delay(500);
    digitalWrite(led11, LOW);
    digitalWrite(led23, LOW);
    
    delay(500);
  }
  digitalWrite(led12, LOW);
  digitalWrite(led24, LOW);
  digitalWrite(led33, LOW);
}

void AkordG(){
  digitalWrite(led21, HIGH);
  digitalWrite(led32, HIGH);
  digitalWrite(led13, HIGH);
  for (int i = 0; i < 2; i++){
    digitalWrite(led23, HIGH);
    delay(500);
    digitalWrite(led23, LOW);
    delay(500);
  }
  digitalWrite(led21, LOW);
  digitalWrite(led32, LOW);
  digitalWrite(led13, LOW);
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

void ShortA(){
  digitalWrite(led24, HIGH);
  for (int i = 0; i < 1; i++){
    digitalWrite(led23, HIGH);
    delay(500);
    digitalWrite(led23, LOW);
    delay(500);
  }
  digitalWrite(led24, LOW);
  delay(1000);
}

void ShortF(){
  digitalWrite(led24, HIGH);
  digitalWrite(led12, HIGH);
  for (int i = 0; i < 1; i++){
    digitalWrite(led23, HIGH);
    digitalWrite(led14, HIGH);
    delay(500);
    digitalWrite(led23, LOW);
    digitalWrite(led14, LOW);
    delay(500);
  }
  digitalWrite(led24, LOW);
  digitalWrite(led12, LOW);
  delay(1000);
}

void ShortD(){
  digitalWrite(led12, HIGH);
  digitalWrite(led24, HIGH);
  digitalWrite(led33, HIGH);
  for (int i = 0; i < 1; i++){
    digitalWrite(led11, HIGH);
    digitalWrite(led23, HIGH);
   
    delay(500);
    digitalWrite(led11, LOW);
    digitalWrite(led23, LOW);
    
    delay(500);
  }
  digitalWrite(led12, LOW);
  digitalWrite(led24, LOW);
  digitalWrite(led33, LOW);
  delay(1000);
}
