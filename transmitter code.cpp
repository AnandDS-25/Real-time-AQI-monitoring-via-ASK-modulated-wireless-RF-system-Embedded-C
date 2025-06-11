#include <RH_ASK.h>
#include <SPI.h>

const int trigPin = 9;
const int echoPin = 10;

RH_ASK rf_driver;

void setup() {
  Serial.begin(9600);
  rf_driver.init();

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // Trigger ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read echo time
  long duration = pulseIn(echoPin, HIGH);
  float distance = duration * 0.034 / 2;

  // Convert distance to string
  String message = String("Distance: ") + distance + " cm";

  // Send via RF
  rf_driver.send((uint8_t *)message.c_str(), message.length());
  rf_driver.waitPacketSent();

  Serial.println("Sent: " + message);

  delay(2000);
}
