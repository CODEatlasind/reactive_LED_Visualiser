int soundSensor = 2;
int LED1 = 5;
int LED2 = 6;
int LED3 = 7;
boolean LEDStatus = false;

void setup() {
  pinMode(soundSensor, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);

}

void loop() {

  int SensorData = digitalRead(soundSensor);
  //  Serial.print(SensorData);
  for (int LED = 5; LED <= 7; LED++) {

    if (SensorData == 1) {

      if (LEDStatus == false) {
        LEDStatus = true;
        digitalWrite(LED, HIGH);

        delay(45);
      }
      else {
        LEDStatus = false;
        digitalWrite(LED, LOW);
        delay(45);
      }
    }
  }
}
