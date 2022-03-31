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
 if (distancia<20)
  {
    digitalWrite(rojo,LOW);
  }
   else
  {
     digitalWrite(rojo,HIGH); 
  }



}
