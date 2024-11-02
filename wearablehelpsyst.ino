const int soundPin = A0;   // Pin for sound reading
int threshold = 0;       
int soundLevel = 0;        // come from analogRead(soundPin);
int average = 0;           // variable to find an average

int calibrate() {          //will find average sound of environment
 for 
}

void setup() {
  Serial.begin(9600);      // Initialize serial monitor for debugging
  pinMode(12, OUTPUT);

}

void loop() {
  soundLevel = analogRead(soundPin);   // Read the sound level
  if (soundLevel > threshold) {        // Buzzer activation
    Serial.println("Loud sound detected!");
    Serial.print("Sound level: ");
    Serial.println(soundLevel);
    digitalWrite(12, HIGH);
    delay(500);
    digitalWrite(12, LOW);
    delay(500);
  }
  Serial.println(soundLevel);
  delay(100);                          // Add a short delay for stability
}
