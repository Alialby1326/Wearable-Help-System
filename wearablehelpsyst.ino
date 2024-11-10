const int soundPin = A0;   // Pin for sound reading
int soundLevel = 0;        // come from analogRead(soundPin);
int button = 2;
int press = 0;
bool toggle = false;  //toggle with button

void setup() {
  Serial.begin(9600);      
  pinMode(13, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(button, INPUT);
  digitalWrite(4, HIGH);
}

void loop() {
  soundLevel = analogRead(soundPin);   // Read sound
  press = digitalRead(button);
  if (press == 1){
    delay(50);
    if(press == 1){
    toggle = !toggle;
    delay(150);
    }
  }

  if (soundLevel > 100){
    toggle = true;
  }

  if (toggle) {
    digitalWrite(13, HIGH);
  } else{
    digitalWrite(13, LOW);
  }
  Serial.print("Current: ");    //testing purposes
  Serial.println(soundLevel);
  delay(100);
  }
