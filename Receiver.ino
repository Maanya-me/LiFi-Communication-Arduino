#define SENSOR A0

char receivedChar;

void setup()
{
  Serial.begin(9600);
}

char readByte()
{
  char data = 0;

  for(int i = 0; i < 8; i++)
  {
    int lightValue = analogRead(SENSOR);

    if(lightValue > 500)
    {
      bitSet(data, i); 
    }

    delay(100); // same as transmitter timing
  }

  return data;
}

void loop()
{
  receivedChar = readByte();
  Serial.print(receivedChar);
}
