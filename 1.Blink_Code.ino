//All Rights Reserved
/*
   Maked By Harindu Lakshitha
   SOCIALS
 *  *****************************************
     Website               : Harindulk
     Github                : Harindulk
     Youtube               : Harindulk
     Arduio Projects Hub   : Harindulk
     Hackster              : Harindulk
     Blog                  : Harindulk
     Wordpress             : Harindulk
     printerest            : Harindulk
     Twitter               : Harindulk
     Google Docs           : Harindulk
     Linkedin              : Harindu Fonseka
 *  *****************************************
*/
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
