#include <RH_ASK.h>
#include <SPI.h>

RH_ASK rf_driver;

void setup() {
  Serial.begin(9600);
  rf_driver.init();
}

void loop() {
  uint8_t buf[20];
  uint8_t buflen = sizeof(buf);

  if (rf_driver.recv(buf, &buflen)) {
    buf[buflen] = '\0';
    String message = String((char *)buf);
    Serial.print("Received Message: ");
    Serial.println(message);
  }

  delay(100);
}
