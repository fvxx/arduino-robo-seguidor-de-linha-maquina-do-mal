#define motor1 9 
#define motor2 11 
#define direcao1 8 
#define direcao2 10 
#define pin_S1 7
#define pin_S2 6
bool sensorIR1 = 0;
bool sensorIR2 = 0;
int velocidade = 150;
void setup(){
pinMode(motor1, OUTPUT);
pinMode(motor2, OUTPUT);
pinMode(direcao1, OUTPUT);
pinMode(direcao2, OUTPUT);
digitalWrite(direcao1, LOW);
digitalWrite(direcao2, LOW);
pinMode(pin_S1, INPUT);
pinMode(pin_S2, INPUT);
}
void loop(){
sensorIR1 = digitalRead(pin_S1);
sensorIR2 = digitalRead(pin_S2);
if((sensorIR1 == 0) && (sensorIR2 == 0)){ 
analogWrite(motor1, velocidade);
analogWrite(motor2, velocidade);
}
if((sensorIR1 == 1) && (sensorIR2 == 0)){
analogWrite(motor1, 0);
analogWrite(motor2, velocidade);
}
if((sensorIR1 == 0) && (sensorIR2 == 1)){
analogWrite(motor1, velocidade);
analogWrite(motor2, 0);
}
}
