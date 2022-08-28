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
 digitalWrite(trig,HIGH);
  delay(1);
  digitalWrite(trig,LOW);
  tiempo=pulseIn(echo,HIGH);
  distancia=tiempo/58.2;
  delay(500);
  Serial.println(distancia);
    if (distancia<20)
  {
    digitalWrite(rojo,LOW);
  }
  else
  {
     digitalWrite(rojo,HIGH); 
  }
  
}
