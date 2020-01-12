#include "Arduino.h"
#include "Heartbeat.h"

Heartbeat::Heartbeat() {
  previousBeat = millis();
  cycleTime = 60000/70;
  systoleTime = cycleTime/2.7;
  dastole = false;
}

void Heartbeat::setBPM(int bpm) {
  cycleTime = 60000 / bpm;
}

bool Heartbeat::checkBeat() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousBeat >= cycleTime) {    
    previousBeat = currentMillis;
    dastole = false;
    return true;
  }

  if (currentMillis - previousBeat >= systoleTime && !dastole) {
    dastole = true;
    return true;
  }

  return false;
}

long Heartbeat::timeSinceLastBeat() {
  unsigned long currentMillis = millis();
  return currentMillis - (previousBeat + ( dastole ? systoleTime : 0));
}



