#define SENSOR A0

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int lightValue = analogRead(SENSOR);

  if(lightValue > 500)
  {
    Serial.println("LIGHT SIGNAL DETECTED");
  }
  else
  {
    Serial.println("NO SIGNAL");
  }

  delay(100);
}