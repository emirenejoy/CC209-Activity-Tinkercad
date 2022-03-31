//Emirene Joy Castillo BSIT-2A
// Distance Measuring Device

//variable declaration
#include<LiquidCrystal.h>
LiquidCrystal lcd = LiquidCrystal(2,3,4,5,6,7);

const int trigPin = 11;
const int echoPin = 12;
float time, distance;

void setup()
{
  lcd.begin(16,2);
  pinMode(13, OUTPUT); //buzzer
  pinMode(10, OUTPUT); //red LED light
  pinMode(9, OUTPUT); //yellow LED light
  pinMode(8, OUTPUT); //green LED light
  pinMode(trigPin, OUTPUT); //trigger
  pinMode(echoPin, INPUT); //echo
  Serial.begin(9600); //communication channel
}

//Main program
void loop()
{
  //Sensor
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  time = pulseIn(echoPin, HIGH);
  
  distance = (time*.0343)/2;
  Serial.print("Distance:CM");
  Serial.println(distance);

  //LCD
  lcd.setCursor(0,0);
  lcd.print("Distance is ");
  
  lcd.setCursor(0,1);
  lcd.print(distance);
  
  delay(1000);
  
  //LED Lights & Buzzer
  if (distance < 10) 
//if distance is below 10cm, red LED light and buzzer turn on
  {
    tone(13, 523, 500); 
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
  }
  else 
  {
    digitalWrite(10, LOW);
    noTone(3);
  }
  
  if (distance < 20 && distance >= 11)
//if distance is below 11- 20cm, yellow LED light turns on
    {
      digitalWrite(9, HIGH);
   } 
  else 
  {
      digitalWrite(9, LOW);
  }
  if (distance >= 20)
//if distance is above 20cm, green LED light turns on
  {
    digitalWrite(8, HIGH);
  } 
  else 
  {
    digitalWrite(8, LOW);
  }
}