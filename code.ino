unsigned long previousMillis = 0;
const unsigned long interval = 100; 
void setup() {

  Serial.begin(115200);
  Serial.println("speed");
}

void loop() {
  
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;

    float speedValue = getSpeed();  
    Serial.println(speedValue, 3);
  }
}

float getSpeed() {
  static float dummySpeed = 0.0;
  dummySpeed += 0.05; 
  if (dummySpeed > 10.0) dummySpeed = 0.0;
  return dummySpeed;
}