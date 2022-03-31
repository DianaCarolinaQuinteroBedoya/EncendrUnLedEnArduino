int trig=13;
int echo=12;
int tiempo;
int distancia;
int rojo=7;

void setup() {
   Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(rojo,OUTPUT); 
}
void loop(){
  digitalWrite(ledPIN , HIGH);   // poner el Pin en HIGH
  delay(1000);                   // esperar un segundo
  digitalWrite(ledPIN , LOW);    // poner el Pin en LOW
  delay(1000);                   // esperar un segundo
}
