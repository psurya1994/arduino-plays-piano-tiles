void setup()
{
  pinMode(4,OUTPUT);
  digitalWrite(4,LOW); 
  pinMode(5,OUTPUT);
  digitalWrite(5,LOW); 
  pinMode(6,OUTPUT);
  digitalWrite(6,LOW); 
  pinMode(7,OUTPUT);
  digitalWrite(7,LOW); 
  
}

int delay1 = 80;
int delay2 = 75;

int count =0;
void loop()
{
  count = count +1;
  if(count==25)
  {
    delay1 = 70;
    delay2 = 75;
  }
 
  if(analogRead(A5)<700) // in black
  {
    digitalWrite(4, HIGH);
    delay(delay2);
    digitalWrite(4, LOW);
    delay(delay1);
    
  }
  else if(analogRead(A4)<700)
  {
    digitalWrite(5, HIGH);
    delay(delay2);
    digitalWrite(5, LOW);
    delay(delay1);
  }
  else if(analogRead(A3)<700)
  {
    digitalWrite(6, HIGH);
    delay(delay2);
    digitalWrite(6, LOW);
    delay(delay1);
  }
  else if(analogRead(A2)<700)
  {
    digitalWrite(7, HIGH);
    delay(delay2);
    digitalWrite(7, LOW);
    delay(delay1);
  }
  delay(10);
}

