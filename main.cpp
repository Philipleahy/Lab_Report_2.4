//Lab Report Speaker Experiment
#include "mbed.h"

//Declarations
DigitalIn fire(p14);
PwmOut spkr(p26);
AnalogIn pot1(p19);

int main() {
 while (1) {
for (float i=2000.0; i<10000.0; i+=100) {
spkr.period(1.0/i);
spkr=0.5;
wait(.2);
}

{for (float i=2000; i<5000; i+=100) {
spkr.period(1.0/i);
spkr=0.25;
wait(0.02);
spkr=0.0;
wait(0.5);
}
 spkr=0.0;
 while(pot1.read() < 0.5) {} // this uses the pot to control the program
 }
}

}