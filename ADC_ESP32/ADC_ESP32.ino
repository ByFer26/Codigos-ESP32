int canal1=32;
int canal2=33;
int control=13;
int lectura1;
int lectura2;
String lectura3;
String lectura4;
int tiempoMuestreo=0;
int ultimoCambio;
void setup(){
Serial.begin(9600);
pinMode(canal1,INPUT);
pinMode(canal2,INPUT);
pinMode(control,INPUT);
}
void loop(){
if(millis()-ultimoCambio>tiempoMuestreo){
  lectura1=analogRead(canal1);
  lectura2=analogRead(canal2);
  lectura3=String(lectura1);
  lectura4=String(lectura2);
  lectura3.concat(",");
  lectura3.concat(lectura4);
  if(digitalRead(control)==HIGH){
    Serial.println(lectura3);
  }
}
}