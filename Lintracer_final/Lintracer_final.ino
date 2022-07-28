int LED[5] = {2,3,4,5,6};

int value1, value2, value3, value4, value5;

int a=350;
int b=370;
int c=370;
int d=420;
int e=360;

int ENA = 10;
int ENB = 11;
int IN1 = 7;
int IN2 = 8;
int IN3 = 9;
int IN4 = 12;


void led() {
  value1 = analogRead(A0);
  value2 = analogRead(A1);
  value3 = analogRead(A2);
  value4 = analogRead(A3);
  value5 = analogRead(A4);
  Serial.print(value1); Serial.print("\t");
  Serial.print(value2); Serial.print("\t");
  Serial.print(value3); Serial.print("\t");
  Serial.print(value4); Serial.print("\t");
  Serial.println(value5); 
  //delay(500);

  if(value1<a) {
    digitalWrite(LED[4], HIGH);
  }
  else{
    digitalWrite(LED[4], LOW);
  }
  if(value2<b) {
    digitalWrite(LED[3], HIGH);
  }
  else{
    digitalWrite(LED[3], LOW);
  }
  if(value3<c) {
    digitalWrite(LED[2], HIGH);
  }
  else{
    digitalWrite(LED[2], LOW);
  }
  if(value4<d) {
    digitalWrite(LED[1], HIGH);
  }
  else{
    digitalWrite(LED[1], LOW);
  }
  if(value5<e) {
    digitalWrite(LED[0], HIGH);
  }
  else{
    digitalWrite(LED[0], LOW);
  }
}


void forward() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENA, 90);
  analogWrite(ENB, 90);
}


void left() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENA, 0);
  analogWrite(ENB, 90);
}


void right() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENA, 90);
  analogWrite(ENB, 0);
}


void st() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
  delay(500);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENA, 70);
  analogWrite(ENB, 70);
  delay(500);
}


void back() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(ENA, 80);
  analogWrite(ENB, 80);
}


void setup() {
  for(int i=0; i<5; i++) {
  pinMode(LED[i], OUTPUT);
  }
  Serial.begin(9600); 
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
}

void motor() {
  if(value2<b || value3<c || value4<d) {
    forward();
   }
  if(value1<a) {
    left();
  }
  if(value5<e) {
    right();
  }
  if(value1<a && value2<b && value3<c && value4<d && value5<e) {
    st();
  }
}


void loop() {
  led();
  motor();
}
