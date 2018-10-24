

#define RELAY1  8                        



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(RELAY1, OUTPUT);    
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);   

}

void loop() {

    // turn on relay/water
    digitalWrite(RELAY1,LOW); 
    digitalWrite(LED_BUILTIN, HIGH);      
    Serial.println("WATER ON");       
    delay(15000);
    //turn off relay/water
    digitalWrite(RELAY1,HIGH);          
    digitalWrite(LED_BUILTIN, LOW);    
    Serial.println("WATER OFF");
    delay(1800000);
  
}
