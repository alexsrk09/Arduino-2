void setup() {
  pinMode(13,OUTPUT); // output del led interno del arduino
  pinMode(2,INPUT); //en este pin colocaremos un pulsador

}

void loop() {
  if(digitalRead(2)==HIGH && digitalRead(13)==LOW){//en caso de estar el led apagado, si se acciona el pulsador:
    digitalWrite(13, HIGH); //encender el led
  }
  if(digitalRead(2)==HIGH && digitalRead(13)==HIGH){//en caso de estar el led encendido, si se acciona el pulsador:
    digitalWrite(13, LOW); //apagar el led
  }
}
