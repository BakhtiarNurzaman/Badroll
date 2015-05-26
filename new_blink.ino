/*
Bakhtiar Nurzaman
*/
int ledPin1 = 13;
int ledPin2 = 12;
int ledPin3 = 2;
int ledPin4 = 3;
void setup() 
{ 
pinMode(ledPin1,OUTPUT); //deklarasi led output
pinMode(ledPin2,OUTPUT);
pinMode(ledPin3,OUTPUT);
pinMode(ledPin4,OUTPUT);
Serial.begin(9600); //connect serial port
}
void loop() 
{
int val = analogRead (A5);
Serial.println(val, DEC);
if(val <= 500)
{
digitalWrite(ledPin1, LOW); // LED menyala
digitalWrite(ledPin2, LOW); // LED menyala
digitalWrite(ledPin3, LOW); // LED menyala
digitalWrite(ledPin4, LOW); // LED menyala
delay(val); 
digitalWrite(ledPin1, HIGH); // LED padam
digitalWrite(ledPin2, HIGH); // LED padam
digitalWrite(ledPin3, HIGH); // LED padam
digitalWrite(ledPin4, HIGH); // LED padam
delay(val); 
}
else
{
digitalWrite(ledPin1, LOW); // LED menyala
digitalWrite(ledPin2, HIGH); // LED padam
digitalWrite(ledPin3, HIGH); // LED padam 
digitalWrite(ledPin4, HIGH); // LED padam
delay(val); 
digitalWrite(ledPin1, HIGH); // LED padam
digitalWrite(ledPin2, LOW); // LED menyala
digitalWrite(ledPin3, HIGH); // LED padam 
digitalWrite(ledPin4, HIGH); // LED padam
delay(val); 
digitalWrite(ledPin1, HIGH); // LED padam
digitalWrite(ledPin2, HIGH); // LED padam
digitalWrite(ledPin3, LOW); // LED menyala
digitalWrite(ledPin4, HIGH); // LED padam
delay(val); 
digitalWrite(ledPin1, HIGH); // LED padam
digitalWrite(ledPin2, HIGH); // LED padam
digitalWrite(ledPin3, HIGH); // LED padam
digitalWrite(ledPin4, LOW); // LED menyala
delay(val); 
}
}
