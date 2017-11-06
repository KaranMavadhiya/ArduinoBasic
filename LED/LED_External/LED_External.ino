/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
*/

//Define pin 10 LED connection
int ledPin = 10;

void setup()
{
  pinMode(ledPin, OUTPUT); //Define LED as OUTPUT
}
void loop()
{
  digitalWrite(ledPin, HIGH); //Lit the LED
  delay(1000); //Delay 1 second
  digitalWrite(ledPin, LOW); //Extinguish the led
  delay(1000); // Delay 1 second
}
