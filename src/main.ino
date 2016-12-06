#include <Homie.h>

void setup() {
  Homie.setFirmware("linurd-iot", "1.0.0");
  Homie.setBrand("Linurd-IoT");
  Homie.setup();
}

void loop() {
  Homie.loop();
}
