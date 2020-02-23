
unsigned long interval=1000; 
unsigned long previousMillis=0; 
bool ledState = false; 
  
void setup() {
 pinMode( LED_BUILTIN, OUTPUT);
 digitalWrite(13, ledState);
}
  
void loop() {
 unsigned long currentMillis = millis(); 
  
 if ((unsigned long)(currentMillis - previousMillis) >= interval) {
   ledState = !ledState; 
   digitalWrite( LED_BUILTIN, ledState); 
   previousMillis = millis();
 }
}
