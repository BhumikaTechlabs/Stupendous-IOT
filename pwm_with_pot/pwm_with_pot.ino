/*PWM Pins for Atmega 328
9
10
11
3
5
6
*/

void setup()
{
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
 
}
 
void loop()
{  
   int a=analogRead(A0);
   int pwm = map(a, 0, 1024, 0, 255); 
   Serial.println(a);
 
   analogWrite(9,pwm);
   analogWrite(10,0); 
   delay(50);
  
}




