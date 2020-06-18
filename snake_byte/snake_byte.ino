/******************
*Name             : Richie Ilot
*Student Number   : 470819
*Description      : Snake Byte in 7 segment display
                  with port manipulation and shift bit
*Date of Creation : 30/11/2019
*******************/

void setup(){
  DDRD = B111111; //sets pin 0-5 (A-F) to OUTPUT
}

void loop(){
  int LED; 
  
  PORTD = B000001; //pin 0 is HIGH
  delay(600);
  PORTD = B000011; //pin 0-1 is HIGH
  
  for(LED = 0; LED < 5; LED++){ //loops the shift bit until 5th process
    delay(600);
    PORTD = PORTD << 1;
  
  }
}
