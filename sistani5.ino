int led=5;//sets the PWM pin as led
void setup() {
  Serial.begin(9600);
  pinMode(5,OUTPUT);// sets the digital pin(PWM) as out put
  
}

void loop() {
 float voltage = analogRead(A0);// reads the value of A0 
float voltage1 =voltage*5/1023;//converts the value of voltage from 0-1023 to 0-5 volts
  
  Serial.print("voltage = ");//write "voltage =" in the serial monitor

  Serial.println(voltage1);// show the value of voltage 1 in the serial monitor
  float voltage2=map(voltage,0,1023,0,255);// converts the vallue of voltage from 0-1023 to 0-255
  analogWrite(led,voltage2);//as the voltage changes , the brightness of the led changes


}
