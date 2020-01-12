# Heartbeat
A mini Arduino library for simulating a heartbeat based on a bpm

## Usage

See the included example for usage. The library simulates a [Cardiac cycle](https://en.wikipedia.org/wiki/Cardiac_cycle), defined by a BPM. 'checkBeat()' returns 'true' twice, to simulate the first and second beat of each cycle.

### Methods
- 'setBPM()' Sets the BPM, if no BPM is set 70 is assumed
- 'checkBeat()' Returns 'true' on the 1st and 2nd beat of each cycle, 'false' in between beats. Note: 'checkBeat()' can only return 'true' once per loop.
- 'timeSinceLastBeat()' Returns time since last beat in ms. Useful for if you want something to happen briefly after each beat, like turning off an LED.