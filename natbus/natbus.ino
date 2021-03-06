#define rightSensor 21 //outside one 
#define leftSensor 14   //inside one

#define rightWheelInput1 9
#define rightWheelInput2 10

#define leftWheelInput3 3
#define leftWheelInput4 4

#define enablePinLeft 22
#define enablePinRight 23

#define LED 13
//22 and 23 are our EN1 and EN2

 int sensorOne = 0;
 int sensorTwo = 0;

void setup() {
  Serial.begin(9600);

  pinMode(rightSensor, INPUT);
  pinMode(leftSensor, INPUT);

  pinMode(rightWheelInput1, OUTPUT);
  pinMode(rightWheelInput2, OUTPUT);

  pinMode(leftWheelInput3, OUTPUT);
  pinMode(leftWheelInput4, OUTPUT);

  pinMode(enablePinRight, OUTPUT);
  pinMode(enablePinLeft, OUTPUT);

  pinMode(LED, OUTPUT);
}

void loop() {


  sensorOne = analogRead(rightSensor);
  sensorTwo = analogRead(leftSensor);

  Serial.print("Left: ");
  Serial.println(sensorOne);
  Serial.print("Right: ");
  Serial.println(sensorTwo);

  //this makes it go forward: having rightWheelInput1: HIGH, rightWheelInput2: LOW
  //this makes it go forward: having leftWheelInput3: HIGH, leftWheelInput4: LOW
  digitalWrite(rightWheelinput1, HIGH);
  digitalWrite(rightWheelinput2, LOW);

  digitalWrite(leftWheelinput3, HIGH);
  digitalWrite(leftWheelinput4, LOW);

  analogWrite(enablePinRight, 255);
  analogWrite(enablePinLeft, 255);

  digitalWrite(LED, HIGH);
  /*
  if (sensorOne > 500) {
    analogWrite(rightWheelinput2, 100);
  } else {
    analogWrite(rightWheelinput2, 150);
  }
  if(sensorTwo > 500){
    analogWrite(leftWheelinput4, 100);
  }else{
    analogWrite(leftWheelinput4, 150);
    
  }*/
  delay(100);
}
