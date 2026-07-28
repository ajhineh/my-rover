/*
 * Firmware for ESP8266 UWB Anchor Nodes
 */
#include <SPI.h>
#include <DW1000.h>

const uint8_t PIN_RST = D2;
const uint8_t PIN_SS = D8;
const uint8_t PIN_IRQ = D1;

void setup() {
  Serial.begin(115200);
  DW1000.begin(PIN_IRQ, PIN_RST);
  DW1000.select(PIN_SS);
  DW1000.newConfiguration();
  DW1000.setDefaults();
  DW1000.commitConfiguration();
  // Configure as Anchor Node with unique ID
}

void loop() {
  // Listen for ranging requests from Rover tag and respond with timestamp
}