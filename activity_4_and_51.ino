//Emirene Joy Castillo BSIT-2A
//Activity 4&5 Create a piezo speaker device that allows 
//the user to select 5 different music.
#define buzzer 2
#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978
#define REST      0

#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978
#define REST      0

#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978
#define REST      0

int tempo = 140;
int tempo2 = 100; 
int choice;


void setup()
{
  
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}


//*************
//Song 1- Super Mario Themed Song
int melody4[] = {
  
   NOTE_E5,8, NOTE_E5,8, REST,8, NOTE_E5,8, REST,8, NOTE_C5,8, NOTE_E5,8, 
  NOTE_G5,4, REST,4, NOTE_G4,8, REST,4, 
  NOTE_C5,-4, NOTE_G4,8, REST,4, NOTE_E4,-4, 
  NOTE_A4,4, NOTE_B4,4, NOTE_AS4,8, NOTE_A4,4,
  NOTE_G4,-8, NOTE_E5,-8, NOTE_G5,-8, NOTE_A5,4, NOTE_F5,8, NOTE_G5,8,
  REST,8, NOTE_E5,4,NOTE_C5,8, NOTE_D5,8, NOTE_B4,-4,
  NOTE_C5,-4, NOTE_G4,8, REST,4, NOTE_E4,-4, 
  NOTE_A4,4, NOTE_B4,4, NOTE_AS4,8, NOTE_A4,4,
  NOTE_G4,-8, NOTE_E5,-8, NOTE_G5,-8, NOTE_A5,4, NOTE_F5,8, NOTE_G5,8,
  REST,8, NOTE_E5,4,NOTE_C5,8, NOTE_D5,8, NOTE_B4,-4,

};
void Song1()
{
  	int notes4 = sizeof(melody4) / sizeof(melody4[0]) / 2;
	int wholenote4 = (60000 * 4) / tempo;
	int divider4 = 0, noteDuration4 = 0;

  for (int thisNote4 = 0; thisNote4 < notes4 * 2; thisNote4 = thisNote4 + 2) {

    
    divider4 = melody4[thisNote4 + 1];
    if (divider4 > 0) {
      
      noteDuration4 = (wholenote4) / divider4;
    } else if (divider4 < 0) {
      
      noteDuration4 = (wholenote4) / abs(divider4);
      noteDuration4 *= 1.5; 
    }

    
    tone(buzzer, melody4[thisNote4], noteDuration4 * 0.9);

    
    delay(noteDuration4);

    noTone(buzzer);
  }
}


//*************
//  Song2- Dart Vader Theme Song
int melody3[] = {
  
   NOTE_A4,-4, NOTE_A4,-4, NOTE_A4,16, NOTE_A4,16, NOTE_A4,16, NOTE_A4,16, NOTE_F4,8, REST,8,
  NOTE_A4,-4, NOTE_A4,-4, NOTE_A4,16, NOTE_A4,16, NOTE_A4,16, NOTE_A4,16, NOTE_F4,8, REST,8,
  NOTE_A4,4, NOTE_A4,4, NOTE_A4,4, NOTE_F4,-8, NOTE_C5,16,

  NOTE_A4,4, NOTE_F4,-8, NOTE_C5,16, NOTE_A4,2,//4
  NOTE_E5,4, NOTE_E5,4, NOTE_E5,4, NOTE_F5,-8, NOTE_C5,16,
  NOTE_A4,4, NOTE_F4,-8, NOTE_C5,16, NOTE_A4,2,
  
  NOTE_A5,4, NOTE_A4,-8, NOTE_A4,16, NOTE_A5,4, NOTE_GS5,-8, NOTE_G5,16, //7 
  NOTE_DS5,16, NOTE_D5,16, NOTE_DS5,8, REST,8, NOTE_A4,8, NOTE_DS5,4, NOTE_D5,-8, NOTE_CS5,16,

  NOTE_C5,16, NOTE_B4,16, NOTE_C5,16, REST,8, NOTE_F4,8, NOTE_GS4,4, NOTE_F4,-8, NOTE_A4,-16,//9
  NOTE_C5,4, NOTE_A4,-8, NOTE_C5,16, NOTE_E5,2,

  NOTE_A5,4, NOTE_A4,-8, NOTE_A4,16, NOTE_A5,4, NOTE_GS5,-8, NOTE_G5,16, //7 
  NOTE_DS5,16, NOTE_D5,16, NOTE_DS5,8, REST,8, NOTE_A4,8, NOTE_DS5,4, NOTE_D5,-8, NOTE_CS5,16,

  NOTE_C5,16, NOTE_B4,16, NOTE_C5,16, REST,8, NOTE_F4,8, NOTE_GS4,4, NOTE_F4,-8, NOTE_A4,-16,//9
  NOTE_A4,4, NOTE_F4,-8, NOTE_C5,16, NOTE_A4,2,
  
};
void Song2()
{
  	int notes3 = sizeof(melody3) / sizeof(melody3[0]) / 2;
	int wholenote3 = (60000 * 4) / tempo;
	int divider3 = 0, noteDuration3 = 0;

  for (int thisNote3 = 0; thisNote3 < notes3 * 2; thisNote3 = thisNote3 + 2) {

    
    divider3 = melody3[thisNote3 + 1];
    if (divider3 > 0) {
      
      noteDuration3 = (wholenote3) / divider3;
    } else if (divider3 < 0) {
     
      noteDuration3 = (wholenote3) / abs(divider3);
      noteDuration3 *= 1.5;
    }

    tone(buzzer, melody3[thisNote3], noteDuration3 * 0.9);

    delay(noteDuration3);

    noTone(buzzer);
  }
}



//*************
void Song3(){//Happy Birthday Song
  tone(buzzer, 293.66,1000);
delay(700);
tone(buzzer, 293.66, 1000);
delay(700);
tone(buzzer, 329.63, 1000);
delay(700);
tone(buzzer, 293.66, 1000);
delay(700);
tone(buzzer, 392, 1000);
delay(700);
tone(buzzer, 369.99, 1000);
delay(1500);

tone(buzzer, 293.66,1000);
delay(700);
tone(buzzer, 293.66, 1000);
delay(700);
tone(buzzer, 329.63, 1000);
delay(700);
tone(buzzer, 293.66, 1000);
delay(700);
tone(buzzer, 440, 1000);
delay(700);
tone(buzzer, 392, 1000);
delay(1500);

tone(buzzer, 293.66,1000);
delay(700);
tone(buzzer, 293.66, 1000);
delay(700);
tone(buzzer, 587.33, 1000);
delay(800);
tone(buzzer, 493.88, 1000);
delay(700);
tone(buzzer, 392, 1000);
delay(700);
tone(buzzer, 369.99, 1000);
delay(700);
tone(buzzer, 329.63, 1000);
delay(1500);

tone(buzzer,261.63,1000);
delay(1000);
tone(buzzer, 261.63, 1000);
delay(1000);
tone(buzzer, 493.88, 1000);
delay(1000);
tone(buzzer, 392, 1000);
delay(1000);
tone(buzzer, 440, 1000);
delay(1000);
tone(buzzer, 392, 1000);
delay(1000);
}

//*************
void Song4(){//Twinkle Twinkle Little Star
tone(buzzer, 261.63,1000);
delay(700);
tone(buzzer, 261.63, 1000);
delay(700);
tone(buzzer, 392, 1000);
delay(700);
tone(buzzer, 392, 1000);
delay(700);
tone(buzzer, 440, 1000);
delay(700);
tone(buzzer, 440,1000);
delay(1000);
tone(buzzer, 392, 1000);
delay(700);

tone(buzzer, 349.23,1000);
delay(700);
tone(buzzer, 349.23, 1000);
delay(700);
tone(buzzer, 329.63, 1000);
delay(700);
tone(buzzer, 329.63, 1000);
delay(700);
tone(buzzer, 293.66, 1000);
delay(700);
tone(buzzer, 293.66,1000);
delay(700);
tone(buzzer, 261.63, 1000);
delay(1000);


tone(buzzer, 392,1000);
delay(700);
tone(buzzer, 392, 1000);
delay(700);
tone(buzzer, 349.23, 1000);
delay(700);
tone(buzzer, 349.23, 1000);
delay(700);
tone(buzzer,329.63, 1000);
delay(700);
tone(buzzer, 329.63,1000);
delay(700);
tone(buzzer, 293.66, 1000);
delay(1000);

tone(buzzer, 392,1000);
delay(700);
tone(buzzer, 392, 1000);
delay(700);
tone(buzzer, 349.23, 1000);
delay(700);
tone(buzzer, 349.23, 1000);
delay(700);
tone(buzzer,329.63, 1000);
delay(700);
tone(buzzer, 329.63,1000);
delay(700);
tone(buzzer, 293.66, 1000);
delay(1000);

tone(buzzer, 261.63,1000);
delay(700);
tone(buzzer, 261.63, 1000);
delay(700);
tone(buzzer, 392, 1000);
delay(700);
tone(buzzer, 392, 1000);
delay(700);
tone(buzzer, 440, 1000);
delay(700);
tone(buzzer, 440,1000);
delay(700);
tone(buzzer, 392, 1000);
delay(1000);

tone(buzzer, 349.23,1000);
delay(700);
tone(buzzer, 349.23, 1000);
delay(700);
tone(buzzer, 329.63, 1000);
delay(700);
tone(buzzer, 329.63, 1000);
delay(700);
tone(buzzer,293.66, 1000);
delay(700);
tone(buzzer, 293.66,1000);
delay(700);
tone(buzzer, 261.63, 1000);
delay(700);


}

//*************
void Song5(){//Baby Shark Song
  tone(buzzer, 261.63,1000);
delay(700);
tone(buzzer, 293.66, 1000);
delay(700);
tone(buzzer, 349.23, 1000);
delay(300);
tone(buzzer, 349.23, 1000);
delay(300);
tone(buzzer, 349.23, 1000);
delay(300);
tone(buzzer, 349.23,1000);
delay(300);
tone(buzzer, 349.23, 1000);
delay(300);
tone(buzzer, 349.23,1000);
delay(300);
tone(buzzer, 349.23, 1000);
delay(300);
tone(buzzer, 349.23, 1000);
delay(300);

tone(buzzer, 261.63,1000);
delay(700);
tone(buzzer, 293.66, 1000);
delay(700);
tone(buzzer, 349.23, 1000);
delay(300);
tone(buzzer, 349.23, 1000);
delay(300);
tone(buzzer, 349.23, 1000);
delay(300);
tone(buzzer, 349.23,1000);
delay(300);
tone(buzzer, 349.23, 1000);
delay(300);
tone(buzzer, 349.23,1000);
delay(300);
tone(buzzer, 349.23, 1000);
delay(300);
tone(buzzer, 349.23, 1000);
delay(300);

tone(buzzer, 261.63,1000);
delay(700);
tone(buzzer, 293.66, 1000);
delay(700);
tone(buzzer, 349.23, 1000);
delay(300);
tone(buzzer, 349.23, 1000);
delay(300);
tone(buzzer, 349.23, 1000);
delay(300);
tone(buzzer, 349.23,1000);
delay(300);
tone(buzzer, 349.23, 1000);
delay(300);
tone(buzzer, 349.23,1000);
delay(300);
tone(buzzer, 349.23, 1000);
delay(300);
tone(buzzer, 349.23, 1000);
delay(300);

tone(buzzer, 369.99,1000);
delay(1000);
tone(buzzer, 349.23, 1000);
delay(1000);
tone(buzzer, 329.63, 1000);
delay(1000);
}


void loop()
{
  Serial.print("What Music do you want to play?\n");
  Serial.print("Please choose below\n");
  Serial.print("List:\n");
  Serial.print("Input 1 - Super Mario Theme Song\n");
  Serial.print("Input 2 - Dart Vader Theme Song\n");
  Serial.print("Input 3 - Happy Birthday Song\n");
  Serial.print("Input 4 - Twinkkle Twinkkle Little Star\n");
  Serial.print("Input 5 - Baby Shark Song\n");
  
 	while (Serial.available() == 0)
    {  
    }
  	choice = Serial.parseInt();
  
 	switch (choice) {
  case 1:
     Song1();
    break;
  case 2:
      Song2();
    break;
    case 3:
      Song3();
      break;
  case 4:
      Song4();
      break;
  case 5:
      Song5();
      break;
  
}
}