//Defines 88 keys from B0 to D Sharp 8
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
 
//Mario main theme melody notes
int melodyMario[] = {
  NOTE_E7, NOTE_E7, 0, NOTE_E7,
  0, NOTE_C7, NOTE_E7, 0,
  NOTE_G7, 0, 0,  0,
  NOTE_G6, 0, 0, 0,
 
  NOTE_C7, 0, 0, NOTE_G6,
  0, 0, NOTE_E6, 0,
  0, NOTE_A6, 0, NOTE_B6,
  0, NOTE_AS6, NOTE_A6, 0,
 
  NOTE_G6, NOTE_E7, NOTE_G7,
  NOTE_A7, 0, NOTE_F7, NOTE_G7,
  0, NOTE_E7, 0, NOTE_C7,
  NOTE_D7, NOTE_B6, 0, 0,
 
  NOTE_C7, 0, 0, NOTE_G6,
  0, 0, NOTE_E6, 0,
  0, NOTE_A6, 0, NOTE_B6,
  0, NOTE_AS6, NOTE_A6, 0,
 
  NOTE_G6, NOTE_E7, NOTE_G7,
  NOTE_A7, 0, NOTE_F7, NOTE_G7,
  0, NOTE_E7, 0, NOTE_C7,
  NOTE_D7, NOTE_B6, 0, 0
};
//Mario main theme tempo
int tempoMario[] = {
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
 
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
 
  9, 9, 9,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
 
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
 
  9, 9, 9,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
};

//StarWars main theme melody notes
int melodyStarWars[] = {
  NOTE_D4, NOTE_D4, NOTE_D4,
  NOTE_G4, NOTE_D5, NOTE_C5, NOTE_B4,
  NOTE_A4, NOTE_G5, NOTE_D5, NOTE_C5,
  NOTE_B4, NOTE_A4, NOTE_G5, NOTE_D5,
  NOTE_C5, NOTE_B4, NOTE_C5, NOTE_A4,
  NOTE_D4, NOTE_D4, NOTE_G4, NOTE_D5,
  NOTE_C5, NOTE_B4, NOTE_A4, NOTE_G5, 
  NOTE_D5, NOTE_C5, NOTE_B4, NOTE_A4,
  NOTE_G5, NOTE_D5, NOTE_C5, NOTE_B4, 
  NOTE_C5, NOTE_A4, NOTE_D4, NOTE_D4,
  NOTE_E4, NOTE_E4, NOTE_C5, NOTE_B4,
  NOTE_A4, NOTE_G4, NOTE_G4, NOTE_A4,
  NOTE_B4, NOTE_A4, NOTE_E4, NOTE_FS4,
  NOTE_D4, NOTE_D4, NOTE_E4, NOTE_E4,
  NOTE_C5, NOTE_B4, NOTE_A4, NOTE_G4,
  NOTE_D5, NOTE_A4, NOTE_A4, NOTE_D4,
  NOTE_D4, NOTE_E4, NOTE_E4, NOTE_C5,
  NOTE_B4, NOTE_A4, NOTE_G4, NOTE_G4,
  NOTE_A4, NOTE_B4, NOTE_A4, NOTE_E4,
  NOTE_FS4, NOTE_D5, NOTE_D5, NOTE_G5,
  NOTE_F5, NOTE_DS5, NOTE_D5, NOTE_C5,
  NOTE_AS4, NOTE_A4, NOTE_G4, NOTE_D5,
};

//StarWars main theme tempo
int tempoStarWars[] = {
  12, 12, 12,
  2, 2, 12, 12,
  12, 2, 4, 12,
  12, 12, 2, 4,
  12, 12, 12, 2,
  6, 12, 2, 2,
  12, 12, 12, 2,
  4, 12, 12, 12,
  2, 4, 12, 12,
  12, 2, 6, 12,
  3, 8, 8, 8,
  8, 8, 12, 12, 
  12, 6, 12, 4, 
  6, 12, 3, 8, 
  8, 8, 8, 8, 
  6, 12, 2, 6, 
  12, 3, 8, 8, 
  8, 8, 8, 12, 
  12, 12, 6, 12, 
  4, 6, 12, 8,
  8, 8, 8, 8, 
  8, 8, 8, 2,
};

//DarthVader march theme notes
int melodyVader[] = {
  NOTE_A4, NOTE_A4, NOTE_A4, NOTE_F4,
  NOTE_C5, NOTE_A4, NOTE_F4, NOTE_C5,
  NOTE_A4, NOTE_E5, NOTE_E5, NOTE_E5,
  NOTE_F5, NOTE_C5, NOTE_GS4, NOTE_F4,
  NOTE_C5, NOTE_A4, NOTE_A5, NOTE_A4,
  NOTE_A4, NOTE_A5,NOTE_GS5, NOTE_G5,
  NOTE_FS5, NOTE_F5, NOTE_FS5, 0,
  NOTE_AS4, NOTE_DS5, NOTE_D5, NOTE_CS5,
  NOTE_C5, NOTE_B4, NOTE_C5, 0,
  NOTE_F4, NOTE_GS4, NOTE_F4, NOTE_GS4,
  NOTE_C5, NOTE_A4, NOTE_C5, NOTE_E5,
  NOTE_A5, NOTE_A4, NOTE_A4, NOTE_A5,
  NOTE_GS5, NOTE_G5, NOTE_FS5, NOTE_F5,
  NOTE_FS5, 0, NOTE_AS4, NOTE_DS5, 
  NOTE_D5, NOTE_CS5, NOTE_C5, NOTE_B4, 
  NOTE_C5, 0, NOTE_F4, NOTE_GS4,
  NOTE_F4, NOTE_C5, NOTE_A4, NOTE_F4,
  NOTE_C5, NOTE_A4, 0, NOTE_E4, NOTE_F4,
  NOTE_D4, 0 ,NOTE_C5, NOTE_B4, NOTE_GS4,
  0, NOTE_G5, NOTE_DS5, NOTE_B4, 
  NOTE_D5, NOTE_C5, NOTE_GS4, NOTE_F4,
  0, NOTE_E4, NOTE_F4, NOTE_D4, 0,
  NOTE_C5, NOTE_B4, NOTE_GS4, 0, 
  NOTE_A5, NOTE_E5, NOTE_C5, NOTE_AS4,
  NOTE_F4, NOTE_CS4, NOTE_AS3, NOTE_A4, 
  NOTE_A4, NOTE_A4, NOTE_F4, NOTE_C5,
  NOTE_A4, NOTE_F4, NOTE_C5, NOTE_A4, 
  NOTE_E5, NOTE_E5, NOTE_E5, NOTE_F5, 
  NOTE_C5, NOTE_GS4, NOTE_F4, NOTE_C5, 
  NOTE_A4, NOTE_A5, NOTE_A4, NOTE_A4, 
  NOTE_A5,NOTE_GS5, NOTE_G5, NOTE_FS5, 
  NOTE_F5, NOTE_FS5, 0, NOTE_AS4, 
  NOTE_DS5, NOTE_D5, NOTE_CS5, NOTE_C5, 
  NOTE_B4, NOTE_C5, 0, NOTE_F4, 
  NOTE_GS4, NOTE_F4, NOTE_GS4, NOTE_C5, 
  NOTE_A4, NOTE_C5, NOTE_E5, NOTE_A5, 
  NOTE_A4, NOTE_A4, NOTE_A5, NOTE_GS5, 
  NOTE_A5, NOTE_FS5, NOTE_F5, NOTE_FS5, 
  0, NOTE_AS4, NOTE_DS5, NOTE_D5, 
  NOTE_CS5, NOTE_C5, NOTE_B4, NOTE_C5, 
  0, NOTE_F4, NOTE_GS4, NOTE_F4,
  NOTE_C5, NOTE_A4, NOTE_F4, NOTE_C5,
  NOTE_A4,
};

//DarthVader tempo
int tempoVader[] = {
  4, 4, 4, 6,
  16, 4, 6, 16,
  2, 4, 4, 4, 6,
  16, 4, 6, 16, 
  2, 4, 6, 16, 
  4, 6, 16, 16,
  16, 8, 8, 8,
  4, 6, 16, 16, 
  16, 8, 8, 8,
  4, 6, 16, 4,
  6, 16, 2, 4,
  6, 16, 4, 6,
  16, 16, 16, 8,
  8, 8, 4, 6,
  16, 16, 16, 8,
  8, 8, 4, 6,
  16, 4, 6, 16,
  2, 8, 8, 8, 
  8, 8, 8, 8,
  8, 8, 8, 8,
  8, 8, 8, 8,
  8, 8, 8, 8,
  8, 8, 8, 8,
  8, 8, 8, 8,
  8, 8, 8, 8,
  8, 4, 4, 4, 6,
  16, 4, 6, 16,
  2, 4, 4, 4, 6,
  16, 4, 6, 16, 
  2, 4, 6, 16, 
  4, 6, 16, 16,
  16, 8, 8, 8,
  4, 6, 16, 16, 
  16, 8, 8, 8,
  4, 6, 16, 4,
  6, 16, 2, 4,
  6, 16, 4, 6,
  16, 16, 16, 8,
  8, 8, 4, 6,
  16, 16, 16, 8,
  8, 8, 4, 6,
  16, 4, 6, 16,
  2,
};

int melodyPin = 2; //Pin that controls the piezo
int message = 0;   //This will hold one byte of the serial message
int noteFlashPin = 11;  //Pin that controls LED that flahes when note is played
int offNoteFlashPin = 12;   //Pin the flashes when note is not played

void setup() {  
  Serial.begin(115200);  //set serial to 115200 baud rate
  pinMode(melodyPin, OUTPUT); 
  pinMode(noteFlashPin, OUTPUT);
  pinMode(offNoteFlashPin, OUTPUT);
}

void loop(){
    if (Serial.available() > 0) { //  Check if there is a new message
      message = Serial.read();    //  Put the serial input into the message

    if (message == 'M'){  //  If a capitol M is received...
      int size = sizeof(melodyMario) / sizeof(int); //Determines the int size of the melody array

      //Goes through the array of notes for the melody
      for (int thisNote = 0; thisNote < size; thisNote++) {

        //These if statements continuously check if the button goes low to cut off music
        if(Serial.read() == 'm'){
         digitalWrite(offNoteFlashPin,LOW);  
         break;
        }
        
      // to calculate the note duration, take one second
      // divided by the note type.
      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
        int noteDuration = 1000 / tempoMario[thisNote];
        
        if(Serial.read() == 'm'){
         digitalWrite(offNoteFlashPin,LOW);  
         break;
        }

        //Plays the note for the correct length of time
        buzzMario(melodyPin, melodyMario[thisNote], noteDuration);
        
        if(Serial.read() == 'm'){
         digitalWrite(offNoteFlashPin,LOW);  
         break;
        }
        
      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
        int pauseBetweenNotes = noteDuration * 1.30;
        
        if(Serial.read() == 'm'){
         digitalWrite(offNoteFlashPin,LOW);  
         break;
        }

        //Institutes a pause between notes to help distinguish the tones
        delay(pauseBetweenNotes);
        
        if(Serial.read() == 'm'){
         digitalWrite(offNoteFlashPin,LOW);  
         break;
        }
        
      // Stop the note playing once it is done:
        buzzMario(melodyPin, 0, noteDuration);
        
        if(Serial.read() == 'm'){
         digitalWrite(offNoteFlashPin,LOW);  
         break;
        }
      }
   }
   
   if (message == 'S'){  //  If a capitol S is received...
    int size = sizeof(melodyStarWars) / sizeof(int);
    
    for (int thisNote = 0; thisNote < size; thisNote++) {
      
      if(Serial.read() == 's'){
         digitalWrite(offNoteFlashPin,LOW);  
         break;
      }
        
      // to calculate the note duration, take one second
      // divided by the note type.
      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
      int noteDuration = 1000 / tempoStarWars[thisNote];
      
      if(Serial.read() == 's'){
         digitalWrite(offNoteFlashPin,LOW);  
         break;
      }
      buzzStarWars(melodyPin, melodyStarWars[thisNote], noteDuration);
      
      if(Serial.read() == 's'){
         digitalWrite(offNoteFlashPin,LOW);  
         break;
        }
      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
      int pauseBetweenNotes = noteDuration * 1.30;
      
      if(Serial.read() == 's'){
         digitalWrite(offNoteFlashPin,LOW);  
         break;
        }
      delay(pauseBetweenNotes);
      
      if(Serial.read() == 's'){
         digitalWrite(offNoteFlashPin,LOW);  
         break;
        }
      // stop the tone playing:
      buzzStarWars(melodyPin, 0, noteDuration);
      
      if(Serial.read() == 's'){
         digitalWrite(offNoteFlashPin,LOW);  
         break;
        }
    }
   }
   if (message == 'V'){  //  If a capitol R is received...
    int size = sizeof(melodyVader) / sizeof(int);
    
    for (int thisNote = 0; thisNote < size; thisNote++) {
      
      if(Serial.read() == 'v'){
         digitalWrite(offNoteFlashPin,LOW);  
         break;
      
      }
      // to calculate the note duration, take one second
      // divided by the note type.
      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
      int noteDuration = 1000 / tempoVader[thisNote];
      
      if(Serial.read() == 'v'){
         digitalWrite(offNoteFlashPin,LOW);  
         break;
      }
      
      buzzVader(melodyPin, melodyVader[thisNote], noteDuration);
      
      if(Serial.read() == 'v'){
         digitalWrite(offNoteFlashPin,LOW);  
         break;
      }
      
      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
      int pauseBetweenNotes = noteDuration * 1.30;
      
      if(Serial.read() == 'v'){
         digitalWrite(offNoteFlashPin,LOW);  
         break;
      }
        
      delay(pauseBetweenNotes);
      
      if(Serial.read() == 'v'){
         digitalWrite(offNoteFlashPin,LOW);  
         break;
      }
      
      // stop the tone playing:
      buzzVader(melodyPin, 0, noteDuration);
      
      if(Serial.read() == 'v'){
         digitalWrite(offNoteFlashPin,LOW);  
         break;
      }
    }
   }
   
   if (message == 'm' || message == 's' || message == 'v'){  //  If a lowercase m,s,or v is received, keep the LEDs off
     digitalWrite(noteFlashPin,LOW);           
     digitalWrite(offNoteFlashPin,LOW);
   }
}
}

//Takes in the piezo pin, frequency, and length a note should be played to produce the correct tone for Mario theme   
void buzzMario(int targetPin, long frequency, long length) {
  
  //If button is turned off before note is played, do not play the note and turn off the LEDs
  if(Serial.read() == 'm'){
    digitalWrite(noteFlashPin, LOW);
    digitalWrite(offNoteFlashPin, LOW);
  }
  else{
  long delayValue = 1000000 / frequency / 2; // calculate the delay value between transitions
  //// 1 second's worth of microseconds, divided by the frequency, then split in half since
  //// there are two phases to each cycle
  long numCycles = frequency * length / 1000; // calculate the number of cycles for proper timing
  //// multiply frequency, which is really cycles per second, by the number of seconds to
  //// get the total number of cycles to produce
  for (long i = 0; i < numCycles; i++) { // for the calculated length of time...
    digitalWrite(noteFlashPin, HIGH); // write flash pin high so LED flashes when note is played
    digitalWrite(offNoteFlashPin, LOW); // write off flash pin low so it does not flash when note is played
    digitalWrite(targetPin, HIGH); // write the buzzer pin high to push out the diaphram
    delayMicroseconds(delayValue); // wait for the calculated delay value
    digitalWrite(targetPin, LOW); // write the buzzer pin low to pull back the diaphram
    delayMicroseconds(delayValue); // wait again or the calculated delay value
  }
  digitalWrite(offNoteFlashPin, HIGH); // write off flash pin high so it flashes when note is not played
  digitalWrite(noteFlashPin, LOW); // write note flash pin low so it does not flash when note is done playing
  }  
}

//Takes in the piezo pin, frequency, and length a note should be played to produce the correct tone for StarWars theme 
void buzzStarWars(int targetPin, long frequency, long length) {
  
  //If button is turned off before note is played, do not play the note and turn off the LEDs
  if(Serial.read() == 's'){
    digitalWrite(noteFlashPin, LOW);
    digitalWrite(offNoteFlashPin, LOW);
  }
  else{
  long delayValue = 1000000 / frequency / 2; // calculate the delay value between transitions
  //// 1 second's worth of microseconds, divided by the frequency, then split in half since
  //// there are two phases to each cycle
  long numCycles = frequency * length / 1000; // calculate the number of cycles for proper timing
  //// multiply frequency, which is really cycles per second, by the number of seconds to
  //// get the total number of cycles to produce
  for (long i = 0; i < numCycles; i++) { // for the calculated length of time...
    digitalWrite(noteFlashPin, HIGH); // write flash pin high so LED flashes when note is played
    digitalWrite(offNoteFlashPin, LOW); // write off flash pin low so it does not flash when note is played
    digitalWrite(targetPin, HIGH); // write the buzzer pin high to push out the diaphram
    delayMicroseconds(delayValue); // wait for the calculated delay value
    digitalWrite(targetPin, LOW); // write the buzzer pin low to pull back the diaphram
    delayMicroseconds(delayValue); // wait again or the calculated delay value
  }
  digitalWrite(offNoteFlashPin, HIGH); // write off flash pin high so it flashes when note is not played
  digitalWrite(noteFlashPin, LOW); // write note flash pin low so it does not flash when note is done playing
  } 
}

//Takes in the piezo pin, frequency, and length a note should be played to produce the correct tone for DarthVader theme 
void buzzVader(int targetPin, long frequency, long length) {
  
  //If button is turned off before note is played, do not play the note and turn off the LEDs
  if(Serial.read() == 'v'){
    digitalWrite(noteFlashPin, LOW);
    digitalWrite(offNoteFlashPin, LOW);
  }
  else{
  long delayValue = 1000000 / frequency / 2; // calculate the delay value between transitions
  //// 1 second's worth of microseconds, divided by the frequency, then split in half since
  //// there are two phases to each cycle
  long numCycles = frequency * length / 1000; // calculate the number of cycles for proper timing
  //// multiply frequency, which is really cycles per second, by the number of seconds to
  //// get the total number of cycles to produce
  for (long i = 0; i < numCycles; i++) { // for the calculated length of time...
    digitalWrite(noteFlashPin, HIGH); // write flash pin high so LED flashes when note is played
    digitalWrite(offNoteFlashPin, LOW); // write off flash pin low so it does not flash when note is played
    digitalWrite(targetPin, HIGH); // write the buzzer pin high to push out the diaphram
    delayMicroseconds(delayValue); // wait for the calculated delay value
    digitalWrite(targetPin, LOW); // write the buzzer pin low to pull back the diaphram
    delayMicroseconds(delayValue); // wait again or the calculated delay value
  }
  digitalWrite(offNoteFlashPin, HIGH); // write off flash pin high so it flashes when note is not played
  digitalWrite(noteFlashPin, LOW); // write note flash pin low so it does not flash when note is done playing
  } 
}
