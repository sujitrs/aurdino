int preValue=-1;
int sensor=0;
int counter=1;
void setup(){
Serial.begin(9600);     // Communication started with 9600 baud

}
void loop(){
sensor=analogRead(A0); // Incoming analog signal read and appointed sensor
if(counter==1||preValue!=sensor){
  preValue=sensor;
  Serial.println(sensor);   
}
counter=counter+1;

}



