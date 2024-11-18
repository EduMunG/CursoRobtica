void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT); //A
  pinMode(3, OUTPUT); //B
  pinMode(4, OUTPUT); //C
  pinMode(5, OUTPUT); //D
  pinMode(6, OUTPUT); //E
  pinMode(7, OUTPUT); //F
  pinMode(8, OUTPUT); //G

}

void loop() {
  // put your main code here, to run repeatedly:
  //NUMERO 0
  digitalWrite(2, HIGH); //A
  digitalWrite(3, HIGH); //B
  digitalWrite(4, HIGH); //C
  digitalWrite(5, HIGH); //D
  digitalWrite(6, HIGH); //E
  digitalWrite(7, HIGH); //F
  digitalWrite(8, LOW); //G
  delay(500);
  //NUMERO 1
  digitalWrite(2, LOW); //A
  digitalWrite(3, HIGH); //B
  digitalWrite(4, HIGH); //C
  digitalWrite(5, LOW); //D 
  digitalWrite(6, LOW); //E
  digitalWrite(7, LOW); //F
  digitalWrite(8, LOW); //G
  delay(500);
  //NUMERO 2
  digitalWrite(2, HIGH); //A
  digitalWrite(3, HIGH); //B
  digitalWrite(4, LOW); //C
  digitalWrite(5, HIGH); //D
  digitalWrite(6, HIGH); //E
  digitalWrite(7, LOW); //F
  digitalWrite(8, HIGH); //G
  delay(500);
  //NUMERO 3
  digitalWrite(2, HIGH); //A
  digitalWrite(3, HIGH); //B
  digitalWrite(4, HIGH); //C
  digitalWrite(5, HIGH); //D
  digitalWrite(6, LOW); //E
  digitalWrite(7, LOW); //F
  digitalWrite(8, HIGH); //G
  delay(500);
  //NUMERO 4
  digitalWrite(2, LOW); //A
  digitalWrite(3, HIGH); //B
  digitalWrite(4, HIGH); //C
  digitalWrite(5, LOW); //D
  digitalWrite(6, LOW); //E
  digitalWrite(7, HIGH); //F
  digitalWrite(8, HIGH); //G
  delay(500);
  //NUMERO 5
  digitalWrite(2, HIGH); //A
  digitalWrite(3, LOW); //B
  digitalWrite(4, HIGH); //C
  digitalWrite(5, HIGH); //D
  digitalWrite(6, LOW); //E
  digitalWrite(7, HIGH); //F
  digitalWrite(8, HIGH); //G
  delay(500);
  //NUMERO 6
  digitalWrite(2, HIGH); //A
  digitalWrite(3, LOW); //B
  digitalWrite(4, HIGH); //C
  digitalWrite(5, HIGH); //D
  digitalWrite(6, HIGH); //E
  digitalWrite(7, HIGH); //F
  digitalWrite(8, HIGH); //G
  delay(500);
  //NUMERO 7
  digitalWrite(2, HIGH); //A
  digitalWrite(3, HIGH); //B
  digitalWrite(4, HIGH); //C
  digitalWrite(5, LOW); //D
  digitalWrite(6, LOW); //E
  digitalWrite(7, LOW); //F
  digitalWrite(8, LOW); //G
  delay(500);
  //NUMERO 8
  digitalWrite(2, HIGH); //A
  digitalWrite(3, HIGH); //B
  digitalWrite(4, HIGH); //C
  digitalWrite(5, HIGH); //D
  digitalWrite(6, HIGH); //E
  digitalWrite(7, HIGH); //F
  digitalWrite(8, HIGH); //G
  delay(500);
  //Numero 9
  digitalWrite(2, HIGH); //A
  digitalWrite(3, HIGH); //B
  digitalWrite(4, HIGH); //C
  digitalWrite(5, HIGH); //D
  digitalWrite(6, LOW); //E
  digitalWrite(7, HIGH); //F
  digitalWrite(8, HIGH); //G
  delay(500);
}
