//int potPin = 7;    
int ledPin = 13;      
int val = 200;         

//仅仅添加条注释
void setup() {
  pinMode(ledPin, OUTPUT);  
}

void loop() {
  //val = analogRead(potPin);    
  digitalWrite(ledPin, HIGH);  // Open the LED.
  delay(val);                
  digitalWrite(ledPin, LOW);   // Close the LED.
  delay(val);                
}
