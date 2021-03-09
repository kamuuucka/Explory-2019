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

//MAIN----------------------------------------------------------------------------------------------------------------------------- MAIN
void loop() {
Verse();
PreChorus();
Chorus1();
delay(2000);
Verse();
PreChorus();
Chorus2();
WaitForMeToGoHome();
Chorus2();

delay(5000);
}

//SONG PARTS ---------------------------------------------------------------------------------------------------------------------- SONG PARTS
void Verse(){
  for (int i = 0; i < 2; i++){
    LongC();  
    LongA();
    LongG();
    LongF();   
  }
}

void PreChorus(){
  AkordA();
  AkordF();
  AkordC();
  AkordG();
  ShortA();
  ShortF();
  ShortC();
  AkordG();
  delay(1000);
}

void Chorus1(){
  LongC();
  LongG();
  LongA();
  ShortF();
  delay(500);
  AkordF();
  delay(1000);
  ShortC();
}

void Chorus2(){
 for (int i = 0; i <2; i++){
  LongC();
  LongG();
  LongA();
  LongF();
 }
}

void WaitForMeToGoHome(){
  LongA();
  LongF();
  LongC();
  LongG();
}

// 2 LOOPS --------------------------------------------------------------------------------------------------------------------------- 2 LOOPS
void LongC(){
  digitalWrite(led31, HIGH);
  for (int i = 0; i < 5; i++){
    digitalWrite(led32, HIGH);
    delay(500);
    digitalWrite(led32, LOW);
    delay(500);
  }
  digitalWrite(led31, LOW);
}

void LongA(){
  digitalWrite(led24, HIGH);
  for (int i = 0; i < 5; i++){
    digitalWrite(led23, HIGH);
    delay(500);
    digitalWrite(led23, LOW);
    delay(500);
  }
  digitalWrite(led24, LOW);
}

void LongF(){
  digitalWrite(led24, HIGH);
  digitalWrite(led12, HIGH);
  for (int i = 0; i < 5; i++){
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

void LongG(){
  digitalWrite(led21, HIGH);
  digitalWrite(led32, HIGH);
  digitalWrite(led13, HIGH);
  for (int i = 0; i < 5; i++){
    digitalWrite(led23, HIGH);
   
    
    delay(500);
    digitalWrite(led23, LOW);
    
    delay(500);
  }
  digitalWrite(led21, LOW);
  digitalWrite(led32, LOW);
  digitalWrite(led13, LOW);  
}

// 1 DOWN ------------------------------------------------------------------------------------------------------------------- 1 DOWN
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
    digitalWrite(led22, HIGH);
    delay(500);
    digitalWrite(led22, LOW);
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


// 1 LOOP ------------------------------------------------------------------------------------------------------------------------------ 1 LOOP
void ShortA(){
  digitalWrite(led24, HIGH);
  for (int i = 0; i < 3; i++){
    digitalWrite(led22, HIGH);
    delay(500);
    digitalWrite(led22, LOW);
    delay(500);
  }
  digitalWrite(led24, LOW);
}

void ShortC(){
  digitalWrite(led31, HIGH);
  for (int i = 0; i < 3; i++){
    digitalWrite(led32, HIGH);
    delay(500);
    digitalWrite(led32, LOW);
    delay(500);
  }
  digitalWrite(led31, LOW);
}

void ShortF(){
  digitalWrite(led24, HIGH);
  digitalWrite(led12, HIGH);
  for (int i = 0; i < 3; i++){
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

void ShortG(){
  digitalWrite(led21, HIGH);
  digitalWrite(led32, HIGH);
  digitalWrite(led13, HIGH);
  for (int i = 0; i < 3; i++){
    digitalWrite(led23, HIGH);
   
    delay(500);
    digitalWrite(led23, LOW);

    delay(500);
  }
  digitalWrite(led21, LOW);
  digitalWrite(led32, LOW);
  digitalWrite(led13, LOW);   
}
