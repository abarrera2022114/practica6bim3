
#include <Wire.h> //Libreria I2C
#include <Adafruit_Sensor.h> //Libreria para Acelerometro
#include <Adafruit_ADXL345_U.h> //Libreria para Acelerometro
#include <Servo.h> //Libreria para servomotor 

Servo Servomotorx ; //Coloca nombre al primer servomotor
Servo Servomotory ; //Coloca nombre al segundo servomotor

int ControlPinx = 7; //Agreaga una variable para el ControlPinx
int x; //Agreaga una variable para x
int y; //Agreaga una variable para y
int z; //Agreaga una variable para z

Adafruit_ADXL345_Unified accel = Adafruit_ADXL345_Unified(); //Coloco Nombre al Acelerometro

int Eje_X = 0; //Variable para la aceleracion en eje X
int Eje_Y = 0; //Variable para la aceleracion en eje Y
int Eje_Z = 0; //Variable para la aceleracion en eje Z
int buzz = 3; //Variable para el buzzer

void setup(void) { 

Serial.begin(9600); //Inicializo el monitor serial a 9600bps
accel.begin();// Inicializo libreria del acelerometro
Servomotorx.attach(7); //Pone el pin al primer servomotor 
Servomotory.attach(6); //Pone el pin al segundo servomotor 
pinMode(4,INPUT); //Pone el pin al buzzer
pinMode(buzz,OUTPUT); //Selecciona el buzzer como salida

}

void loop(void) {

sensor(); // dirige a la interrupcion sensor
delay(100); //tiempo de espera

x=map(Eje_X,-10,10,0,180); //convierte los metros sobre segundos cuadrados a grados
y=map(Eje_Y,-10,10,0,180); //convierte los metros sobre segundos cuadrados a grados 
Servomotorx.write(x); //imprime el valor de x
Servomotory.write(y); //imprime el valor de y
bool estado = digitalRead(4); //crea un valor boleano para estado
Serial.println(estado); //imprime el valor en el monitor serial

if( estado == 0){  //se crea una condicion

  buzzer(); // dirige a la interrupcion buzzer
  noTone(buzz); //apaga el buzzer

}

}

void sensor() { //se crea la funcion sensor

  sensors_event_t event; //Le coloco un nombre a las lecturas del acelerometro
  accel.getEvent(&event); //los datos de las lecturas del acelerometro se pasan a la funcion que envia los datos
  Eje_X = event.acceleration.x; //Asigna la lectura del acelerometro en el eje X
  Eje_Y = event.acceleration.y; //Asigna la lectura del acelerometro en el eje Y
  Eje_Z = event.acceleration.z; //Asigna la lectura del acelerometro en el eje Z
  Serial.print("X: "); Serial.print(Eje_X); Serial.print(" "); //imprime el valor en el monitor serial
  Serial.print("Y: "); Serial.print(Eje_Y); Serial.print(" "); //imprime el valor en el monitor serial
  Serial.print("Z: "); Serial.print(Eje_Z); Serial.println(" "); //imprime el valor en el monitor serial

}

void buzzer() {

    tone(buzz, 195, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 220, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 246, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 277, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 195, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 220, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 246, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 277, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 207, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 233, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 261, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 293, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 207, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 233, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 261, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 293, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 220, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 246, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 277, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 311, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 220, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 246, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 277, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 311, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 233, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 261, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 293, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 329, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 233, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 261, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 293, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 329, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 246, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 277, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 311, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 349, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 261, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 293, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 329, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 369, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 277, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 311, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 349, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 391, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 293, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 329, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 369, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    tone(buzz, 415, 92.2130625); //elige el tono del buzzer
    delay(102.458958333); //tiempo de espera
    delay(409.835833333); //tiempo de espera


    tone(buzz, 349, 184.426125); //elige el tono del buzzer
    delay(204.917916667); //tiempo de espera
    tone(buzz, 369, 184.426125); //elige el tono del buzzer
    delay(204.917916667); //tiempo de espera
    tone(buzz, 391, 184.426125); //elige el tono del buzzer
    delay(204.917916667); //tiempo de espera
    tone(buzz, 415, 2028.687375); //elige el tono del buzzer
    delay(2254.09708333); //tiempo de espera
    delay(4815.57104167); //tiempo de espera
    tone(buzz, 1174, 1567.6220625); //elige el tono del buzzer
    delay(1741.80229167); //tiempo de espera
}