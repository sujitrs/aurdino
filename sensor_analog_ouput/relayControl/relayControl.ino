const int relayPin=8;
void setup() {
  // put your setup code here, to run once:
  pinMode(relayPin,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(relayPin,HIGH);
 Serial.println("ON"); 
delay(10000);
digitalWrite(relayPin,LOW);
Serial.println("OFF"); 
delay(10000);
}
