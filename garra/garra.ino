 #include <Servo.h> //importa a biblioteca do servo

//CÓDIGO OFC DO ARDUINO DAY Q FUNCIONA
  Servo servoBase;
  Servo servo2; //variável do servo 
  Servo servo3;
  Servo servoGarra;
  
  #define pa01 A1 //PONTO E VIRGULA NAO EXISTE EM BGL DE #DEFINE
  #define pa02 A2 
  #define pa03 A3 
  #define pa04 A4 
  
  int angServoBase;
  int angServo2;
  int angServo3;
  int angServoGarra;

 void setup() { 
  // put your setup code here, to run once:
  Serial.begin(9600);

  //portas digitais
  servoBase.attach(3);//base
  servo2.attach(5);//2
  servo3.attach(6);//3
  servoGarra.attach(9);
  }

void loop() {
  // put your main code here, to run repeatedly:
  angServoBase = map(analogRead(pa01), 0, 1023, 0, 179); 
  angServo2 = map(analogRead(pa02), 0, 1023, 0, 179); // ("minimo e maximo do potenciometro", "minimo e maximo do servo")
  angServo3 = map(analogRead(pa03), 0, 1023, 0, 179); 
  angServoGarra = map(analogRead(pa04), 0, 1023, 0, 120); 

  servoBase.write(angServoBase);
  servo2.write(angServo2);
  servo3.write(angServo3);
  servoGarra.write(angServoGarra);
  //delay(100);
}
