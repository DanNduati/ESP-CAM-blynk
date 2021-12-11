const int fanPin =  3;
unsigned long previousMillis = 0;
const long interval = 1800000; // 30 minutes --> 30min * 60sec/min * 1000ms/sec = 1800000ms
void setup() {
  pinMode(fanPin, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    // save the last time you turned on the fan
    previousMillis = currentMillis;
    switchFan();
  }
}
//switch fan on for 2 seconds
void switchFan(){
  digitalWrite(fanPin, HIGH);
  delay(2000);
  digitalWrite(fanPin, LOW);
}
