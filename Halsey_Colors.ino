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
 Verse();
 Chorus();
 Verse();
 Chorus();
 Bridgeeee();
 Chorus();
 //tutaj jest to everything is blue
 delay(5000);
 
}

void Verse(){
  for (int i = 0; i < 4; i++){
  AkordA();
  AkordF();
  AkordC();
  AkordG();
  }
}

void Chorus(){
  for (int i = 0; i < 4; i++){
  SAkordA();
  SAkordF();
  SAkordC();
  SAkordG();
  }
}

void Bridgeeee(){
  SAkordA();
  SAkordF();
  SAkordC();
  SAkordG();
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

void AkordF(){
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

void SAkordA(){
  digitalWrite(led24, HIGH);
  for (int i = 0; i < 4; i++){
    digitalWrite(led23, HIGH);
    delay(250);
    digitalWrite(led23, LOW);
    delay(250);
  }
  digitalWrite(led24, LOW);
}

void SAkordF(){
  digitalWrite(led24, HIGH);
  digitalWrite(led12, HIGH);
  for (int i = 0; i < 5; i++){
    digitalWrite(led23, HIGH);
    digitalWrite(led14, HIGH);
    delay(250);
    digitalWrite(led23, LOW);
    digitalWrite(led14, LOW);
    delay(250);
  }
  digitalWrite(led24, LOW);
  digitalWrite(led12, LOW);
}

void SAkordC(){
  digitalWrite(led31, HIGH);
  for (int i = 0; i < 5; i++){
    digitalWrite(led32, HIGH);
    delay(250);
    digitalWrite(led32, LOW);
    delay(250);
  }
  digitalWrite(led31, LOW);
}
void SAkordG(){
  digitalWrite(led21, HIGH);
  digitalWrite(led32, HIGH);
  digitalWrite(led13, HIGH);
  for (int i = 0; i < 4; i++){
    digitalWrite(led23, HIGH);
    delay(250);
    digitalWrite(led23, LOW);
    delay(250);
  }
  digitalWrite(led21, LOW);
  digitalWrite(led32, LOW);
  digitalWrite(led13, LOW);  
}
