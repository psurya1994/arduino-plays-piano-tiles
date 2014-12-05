void setup()
{
  //Serial.begin(9600);

  pinMode(4,OUTPUT);
  digitalWrite(4,LOW); 
  pinMode(5,OUTPUT);
  digitalWrite(5,LOW); 
  pinMode(6,OUTPUT);
  digitalWrite(6,LOW); 
  pinMode(7,OUTPUT);
  digitalWrite(7,LOW); 
  
}

int delay1 = 500;
int delay2 = 500;
int present = 0;

void loop()
{
    digitalWrite(4, HIGH);
    delay(delay2);
    digitalWrite(4, LOW);
    delay(delay1);
    
    digitalWrite(5, HIGH);
    delay(delay2);
    digitalWrite(5, LOW);
    delay(delay1);
    
    digitalWrite(6, HIGH);
    delay(delay2);
    digitalWrite(6, LOW);
    delay(delay1);
    
    digitalWrite(7, HIGH);
    delay(delay2);
    digitalWrite(7, LOW);
    delay(delay1);
}

