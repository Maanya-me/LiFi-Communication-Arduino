#define LED_PIN 13

String message = "HELLO";

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void sendByte(char data)
{
  for(int i=0;i<8;i++)
  {
    if(bitRead(data,i))
      digitalWrite(LED_PIN,HIGH);
    else
      digitalWrite(LED_PIN,LOW);

    delay(100);
  }
}

void loop()
{
  for(int i=0;i<message.length();i++)
  {
    sendByte(message[i]);
  }

  digitalWrite(LED_PIN,LOW);
  delay(1000);
}