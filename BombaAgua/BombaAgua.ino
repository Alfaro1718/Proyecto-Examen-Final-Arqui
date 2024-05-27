int BA = 8;
int H = 0;

void setup() {
  Serial.begin(9600);
  pinMode(BA, OUTPUT);
}

void loop() {
  H = analogRead(A0); //Cuando realizamos una lectura analoga valores entre 0 a 1024

  if(H >= 500 && H <= 1024)
  {
    digitalWrite(BA, LOW);
  }else 
  {
    digitalWrite(BA, HIGH);
  }
  Serial.println(H);
  delay(500);
}
