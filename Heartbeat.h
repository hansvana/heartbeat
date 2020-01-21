#ifndef Heartbeat_h
#define Heartbeat_h

#include "Arduino.h"

class Heartbeat {
    public:
        Heartbeat();
        void setBPM(int bpm = 70);
        bool checkBeat();
        long timeSinceLastBeat();
        bool secondBeat;
    private:
        unsigned long previousBeat = 0;
        unsigned long cycleTime;
        unsigned long systoleTime;

        bool dastole;
};

#endif
