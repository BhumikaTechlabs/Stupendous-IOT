int  l,r;
void setup() {
  pinMode(2,INPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  
  pinMode(3,INPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  
  
 

}

void loop()
{
 a= digitalRead(4);
 if(a==HIGH)
    { digitalWrite(2,HIGH);
      digitalWrite(3,LOW);
      delay(1000);
      
 }
 else if(a==LOW)
 {
   digitalWrite(3,LOW);
      digitalWrite(2,LOW);
      delay(1000);
    
}
}
