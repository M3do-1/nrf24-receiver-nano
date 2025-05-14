#include <SPI.h>
#include <RF24.h>

// Pin setup (adjustable)

#define CE_PIN 9
#define CEN_PIN 10

RF24 radio(CE_PIN, CSN_PIN); // nRF24L01 radio instance

// Define your control packet structure
struct ControlPacket {
  int throttle;
  int yaw;
  int pitch;
  int roll;
};

// Global Var
ControlPacket controls;
unsigned long lastPacketTime = 0;
const unsigned long FAILSAFE_TIMEOUT = 500 // in milliseconds

void setup() {
  Serial.begin(9600);
  initRadio();
}

void loop() {
  if (receivePacket()) {
    parsePacket();
    updateLastPacketTime();
  }

  checkFailsafe();
  printControls();
}

// --- Parent Function Definitions ---

void initRadio() {
  // Initialize radio Settings
}

bool recivePacket() {
  // check if a packet is available and read it into `controls`
  return false;
}

void parsePacket() {
  // Parse the `controls` struct if needed
}

void updateLastPacketTime() {
  // Updates the `lastPacketTime` with current time
}

void checkFailsafe() {
  // If timeout exceeded, zero out control values
}

void printControls() {
  // Print throttle, yaw, pitch, roll via Serial
}