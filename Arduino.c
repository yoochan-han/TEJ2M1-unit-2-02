/*
  blink with variable

  Turn an LED on for one second,then off for one second, repeatedly.
  But the interval increases each time by 1 more seconds

  created on Feb 2025
  by yoochan Han
*/

int blinkTime = 1000; //set variable to 1000

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(blinkTime); // Wait for blinkTime
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for a second
  blinkTime = blinkTime + 1000;  // add 1 second to variable blinkTime
}
