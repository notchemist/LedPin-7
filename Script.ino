// Here there is the Arduino script to command a led on pin 7

void setup()
{
  pinMode(7, OUTPUT);
}
  
void loop()
{
  digitalWrite(7, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(7, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
