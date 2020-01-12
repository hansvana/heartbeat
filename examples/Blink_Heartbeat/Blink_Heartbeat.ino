#include <Heartbeat.h>

Heartbeat heartbeat;

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    heartbeat.setBPM(70);
}

void loop() {
    if (heartbeat.checkBeat()) {
        digitalWrite(LED_BUILTIN, HIGH); 
    }
    if (heartbeat.timeSinceLastBeat() > 50) {
       digitalWrite(LED_BUILTIN, LOW); 
    }
}