// the setup function runs once when you press reset or power the board
int speed = 1;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
massage(150,50);      //.
massage(150,250);     //._
massage(550,50);      //-
massage(550,650);     //-___
massage(550,50);      //-
massage(550,50);      //-
massage(550,250);     //-_
massage(550,50);      //-
massage(150,50);      //.
massage(550,50);      //-
digitalWrite(LED_BUILTIN, HIGH);
delay(10000);      //end
}


void massage(int lenghon, int lenghoff){
  digitalWrite(LED_BUILTIN, LOW);   // Arduino: turn the LED on (HIGH)
                                     // D1 Mini: turns the LED *off*
  delay(lenghon*speed);                       // wait for a second
  digitalWrite(LED_BUILTIN, HIGH);    // Arduino: turn the LED off (LOW)
                                     // D1 Mini: turns the LED *on*
  delay(lenghoff*speed);                       // wait for a second
}