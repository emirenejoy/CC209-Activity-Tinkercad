//Emirene Joy Castillo BSIT-2A
//Lead Light Show- Activity 2 &3
//Create an embedded system that will allow a user to select LED Light Show

//variable declarations
int userinput; // variables for user input

//setup
void setup()
{
  Serial.begin(9600); //communication channel
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}
//--------------------------------//
void LedLightShow1(){ //digital light show 1 (Mr. Bean)
  digitalWrite(10, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  delay(250);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW); //
  delay(100);
  
  digitalWrite(10, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH); 
  delay(250);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW); //
  delay(100);
  
  digitalWrite(10, HIGH);
  digitalWrite(13, HIGH);
  delay(250);
  digitalWrite(10, LOW);
  digitalWrite(13, LOW);//ALTERNATING
  delay(100);
  
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  delay(250);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);//ALTERNATING
  delay(100);
  
   digitalWrite(10, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  delay(250);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW); //
  delay(100);
  
  digitalWrite(10, HIGH);
  delay(250);
  digitalWrite(10, LOW);
  delay(100);
  digitalWrite(11, HIGH);
  delay(250);
  digitalWrite(10, LOW);//
  delay(100);
  
  digitalWrite(10, HIGH);
  delay(250);
  digitalWrite(10, LOW);
  delay(100);
  digitalWrite(11, HIGH);
  delay(250);
  digitalWrite(10, LOW);
  delay(100);//LAST
  
  //second
  digitalWrite(10, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  delay(250);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW); //
  delay(100);
  
  digitalWrite(10, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH); 
  delay(250);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW); //
  delay(100);
  
  digitalWrite(10, HIGH);
  digitalWrite(13, HIGH);
  delay(250);
  digitalWrite(10, LOW);
  digitalWrite(13, LOW);//ALTERNATING
  delay(100);
  
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  delay(250);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);//ALTERNATING
  delay(100);
  
   digitalWrite(10, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  delay(250);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW); //
  delay(100);
  
  digitalWrite(10, HIGH);
  delay(250);
  digitalWrite(10, LOW);
  delay(100);
  digitalWrite(11, HIGH);
  delay(250);
  digitalWrite(10, LOW);//
  delay(100);
  
  digitalWrite(10, HIGH);
  delay(250);
  digitalWrite(10, LOW);
  delay(100);
  digitalWrite(11, HIGH);
  delay(250);
  digitalWrite(10, LOW);
  delay(100);//LAST
  
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  delay(250);
  digitalWrite(12, HIGH);
  delay(250);
  digitalWrite(13, HIGH);
  delay(250);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  delay(250);
  digitalWrite(12, LOW);
  delay(250);
  digitalWrite(13, LOW);//end
  delay(250);
  
  delay(10000000000);  
}

void LedLightShow2(){ //digital light show 2 (Pink Panther)
  
  delay(1000);
  digitalWrite(13, HIGH);
  delay (400);
  digitalWrite(12, HIGH);
  delay (400);
  
  digitalWrite(11, HIGH);
  delay (400);
  digitalWrite(13, LOW);
  delay (400);
  
  digitalWrite(10, HIGH);
  delay (400);
  digitalWrite(12, LOW);
  delay (400);
  
  digitalWrite(10, LOW);
  delay (200);
  digitalWrite(11, LOW);
  delay (200);
  
  digitalWrite(10, HIGH);
  delay (200);
  digitalWrite(11, LOW);
  delay (200);
  digitalWrite(10, LOW);
  delay (200);
  digitalWrite(11, HIGH);
  delay (200);
  digitalWrite(10, LOW);
  delay (200);
  digitalWrite(11, HIGH);
  delay (200);
  
  digitalWrite(10, HIGH);
  delay (400);
  digitalWrite(11, HIGH);
  delay (400);
  
  digitalWrite(10, LOW);
  delay (200);
  digitalWrite(11, LOW);
  delay (200);
  
  digitalWrite(10, HIGH);
  delay (400);
  digitalWrite(11, HIGH);
  delay (400);
  
  digitalWrite(10, LOW);
  delay (200);
  digitalWrite(11, LOW);
  delay (200);
  
  digitalWrite(13, HIGH);
  delay (400);
  digitalWrite(13, LOW);
  delay (200);
  
  digitalWrite(12, HIGH);
  delay (400);
  digitalWrite(12, LOW);
  delay (200);
  
  digitalWrite(11, HIGH);
  delay (400);
  digitalWrite(11, LOW);
  delay (200);
  
  digitalWrite(10, HIGH);
  delay (400);
  digitalWrite(10, LOW);
  delay (200);
  
   digitalWrite(13, HIGH);
  delay (400);
  digitalWrite(12, HIGH);
  delay (400);
  
  digitalWrite(11, HIGH);
  delay (400);
  digitalWrite(13, LOW);
  delay (400);
  
  digitalWrite(10, HIGH);
  delay (400);
  digitalWrite(12, LOW);
  delay (400);
  
  digitalWrite(10, LOW);
  delay (200);
  digitalWrite(11, LOW);
  delay (200);
  
  digitalWrite(10, HIGH);
  delay (200);
  digitalWrite(11, LOW);
  delay (200);
  digitalWrite(10, LOW);
  delay (200);
  digitalWrite(11, HIGH);
  delay (200);
  digitalWrite(10, LOW);
  delay (200);
  digitalWrite(11, HIGH);
  delay (200);
  
  digitalWrite(10, HIGH);
  delay (400);
  digitalWrite(11, HIGH);
  delay (400);
  
  digitalWrite(10, LOW);
  delay (200);
  digitalWrite(11, LOW);
  delay (200);
  
  digitalWrite(10, HIGH);
  delay (400);
  digitalWrite(11, HIGH);
  delay (400);
  
  digitalWrite(10, LOW);
  delay (200);
  digitalWrite(11, LOW);
  delay (200);
  
  digitalWrite(13, HIGH);
  delay (400);
  digitalWrite(13, LOW);
  delay (200);
  
  digitalWrite(12, HIGH);
  delay (400);
  digitalWrite(12, LOW);
  delay (200);
  
  digitalWrite(11, HIGH);
  delay (400);
  digitalWrite(11, LOW);
  delay (200);
  
  digitalWrite(10, HIGH);
  delay (400);
  digitalWrite(10, LOW);
  delay (200);//end

   delay(10000000000);  
}

void LedLightShow3(){ //digital light show 3 (Tom and Jerry)
  digitalWrite(10, HIGH);
  delay (100);
  digitalWrite(11, HIGH);
  delay (100);
  digitalWrite(12, HIGH);
  delay (100);
  digitalWrite(13, HIGH);//count
  delay (100);
  
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);//count off
  delay (50);
  
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);//blink
  delay (100);
  
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);//off blink
  delay (50);
  
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);//blink
  delay (100);
  
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);//off blink
  delay (50);
  
  digitalWrite(10, HIGH);
  delay (100);
  digitalWrite(11, HIGH);
  delay (100);
  digitalWrite(12, HIGH);
  delay (100);
  digitalWrite(13, HIGH);//count
  delay (100);
  
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);//count off
  delay (50);
  
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);//blink
  delay (100);
  
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);//off blink
  delay (50);
  
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);//blink
  delay (100);
  
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);//off blink
  delay (50);
  
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  
  digitalWrite(11, HIGH);
  delay (250);
  digitalWrite(13, HIGH);//chorus
  delay (250);
  
  digitalWrite(10, HIGH);
  delay (100);
  digitalWrite(12, HIGH);
  delay (100);
  digitalWrite(11, LOW);
  delay (250);
  digitalWrite(13, LOW);
  delay (250);
  
  digitalWrite(11, HIGH);
  delay (100);
  digitalWrite(13, HIGH);
  delay (100);
   digitalWrite(10, LOW);
  delay (100);
  digitalWrite(12, LOW);
  delay (100);
  
  
  digitalWrite(10, HIGH);
  delay (100);
  digitalWrite(12, HIGH);
  delay (100);
   digitalWrite(11, LOW);
  delay (100);
  digitalWrite(13, LOW);
  delay (100);
  
  digitalWrite(10, LOW);
  delay (100);
  digitalWrite(12, LOW);
  delay (100);//tenenenen...
  
  digitalWrite(10, HIGH);
  delay (100);
  digitalWrite(11, HIGH);
  delay (100);
  digitalWrite(12, HIGH);
  delay (100);
  digitalWrite(13, HIGH);//count
  delay (100);
  
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);//count off
  delay (50);
  
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);//blink
  delay (100);
  
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);//off blink
  delay (50);
  
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);//blink
  delay (100);
  
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);//off blink
  delay (50);
  
  digitalWrite(10, HIGH);
  delay (100);
  digitalWrite(11, HIGH);
  delay (100);
  digitalWrite(12, HIGH);
  delay (100);
  digitalWrite(13, HIGH);//count
  delay (100);
  
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);//count off
  delay (50);
  
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);//blink
  delay (100);
  
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);//off blink
  delay (50);
  
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);//blink
  delay (100);
  
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);//off blink
  delay (50);
  
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  
  digitalWrite(11, HIGH);
  delay (250);
  digitalWrite(13, HIGH);//chorus
  delay (250);
  
  digitalWrite(10, HIGH);
  delay (100);
  digitalWrite(12, HIGH);
  delay (100);
  digitalWrite(11, LOW);
  delay (250);
  digitalWrite(13, LOW);
  delay (250);
  
  digitalWrite(11, HIGH);
  delay (100);
  digitalWrite(13, HIGH);
  delay (100);
   digitalWrite(10, LOW);
  delay (100);
  digitalWrite(12, LOW);
  delay (100);
  
  digitalWrite(10, HIGH);
  delay (100);
  digitalWrite(12, HIGH);
  delay (100);
   digitalWrite(11, LOW);
  delay (100);
  digitalWrite(13, LOW);
  delay (100);
  
  digitalWrite(10, LOW);
  delay (100);
  digitalWrite(12, LOW);
  delay (100);//tenenenen...
  
  digitalWrite(10, HIGH);
  delay (100);
  digitalWrite(11, HIGH);
  delay (100);
  digitalWrite(12, HIGH);
  delay (100);
  digitalWrite(13, HIGH);//count
  delay (100);
  
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);//count off
  delay (50);
  
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);//blink
  delay (100);
  
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);//off blink
  delay (50);
  
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);//blink
  delay (100);
  
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);//off blink
  delay (50);
  
  digitalWrite(10, HIGH);
  delay (100);
  digitalWrite(11, HIGH);
  delay (100);
  digitalWrite(12, HIGH);
  delay (100);
  digitalWrite(13, HIGH);//count
  delay (100);
  
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);//count off
  delay (50);
  
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);//blink
  delay (100);
  
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);//off blink
  delay (50);
  
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);//blink
  delay (100);
  
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);//off blink
  delay (50);
  
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  
  digitalWrite(11, HIGH);
  delay (250);
  digitalWrite(13, HIGH);//chorus
  delay (250);
  
  digitalWrite(10, HIGH);
  delay (100);
  digitalWrite(12, HIGH);
  delay (100);
  digitalWrite(11, LOW);
  delay (250);
  digitalWrite(13, LOW);
  delay (250);
  
  digitalWrite(11, HIGH);
  delay (100);
  digitalWrite(13, HIGH);
  delay (100);
   digitalWrite(10, LOW);
  delay (100);
  digitalWrite(12, LOW);
  delay (100);
  
  
  digitalWrite(10, HIGH);
  delay (100);
  digitalWrite(12, HIGH);
  delay (100);
   digitalWrite(11, LOW);
  delay (100);
  digitalWrite(13, LOW);
  delay (100);
  
  digitalWrite(10, LOW);
  delay (100);
  digitalWrite(12, LOW);
  delay (100);//tenenenen...
  
   delay(10000000000);  
}
 
//main program or for the Serial Monitor
void loop(){
  
  while (Serial.available() == 0) {//Serial Bus Channel availability
  }
  
    int userinput = Serial.parseInt();
    
  switch (userinput) {
     case 1:Serial.println("Led Light Show 1 now playing...");
     LedLightShow1();
     break;
    
     case 2:Serial.println("Led Light Show 2 now playing...");
     LedLightShow2();
     break;
    
     case 3:Serial.println("Led Light Show 3 now playing...");
     LedLightShow3 ();
     break;
    
     default:
     Serial.println("Selected number does not exist");
    }
 }