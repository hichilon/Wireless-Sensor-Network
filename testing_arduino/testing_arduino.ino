
// the setup routine runs once when you press reset:
void setup() {                
  Serial.begin(115200); 
  Serial.println("Begin Transmit");  
}

// the loop routine runs over and over again forever:
void loop() {
  Serial.print("From the arduino\n");
  delay(3000);
}
