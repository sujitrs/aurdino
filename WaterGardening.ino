

#define RELAY1  8                        



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(RELAY1, OUTPUT);    
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);   

}

void loop() {
    // put your main code here, to run repeatedly:
  int moistureSensor=analogRead(A0); // Incoming analog signal read and appointed sensor
  Serial.println(moistureSensor);
  if (moistureSensor<900){
    //turn off relay/water
    digitalWrite(RELAY1,HIGH);          
    digitalWrite(LED_BUILTIN, LOW);    
    Serial.println("WATER OFF");
//    delay(3*3600*1000);                                      

  }else{
  // turn on relay/water
  digitalWrite(RELAY1,LOW); 
    digitalWrite(LED_BUILTIN, HIGH);      
    Serial.println("WATER ON");       
  }
  
}
