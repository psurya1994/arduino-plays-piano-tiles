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

int delay1 = 90;
int delay2 = 85;
int present = 0;

void loop()
{
  start:
    int v1,v2,v3,v4;
  //Serial.print("First ");
  v1 = analogRead(A5);
  //Serial.print(v1);
  
  //Serial.print("   Second ");
  v2 = analogRead(A4);
  //Serial.print(v2);

  //Serial.print("   Third ");
  v3 = analogRead(A3);
  //Serial.print(v3);
  
 // Serial.print("   Fourth ");
  v4 = analogRead(A2);
 // Serial.println(v4);
  
  if(v1<650) // in black
  {
    digitalWrite(4, HIGH);
    delay(delay2);
    digitalWrite(4, LOW);
    delay(delay1);
    present = 1;
    
  }
    if(v2<650) // in black
  {
    digitalWrite(5, HIGH);
    delay(delay2);
    digitalWrite(5, LOW);
    delay(delay1);
    present = 2;
  }
    if(v3<650) // in black
  {
    digitalWrite(6, HIGH);
    delay(delay2);
    digitalWrite(6, LOW);
    delay(delay1);
    present = 3;
  }
    if(v4<650) // in black
  {
    digitalWrite(7, HIGH);
    delay(delay2);
    digitalWrite(7, LOW);
    delay(delay1);
    present = 4;
  }
    

}
