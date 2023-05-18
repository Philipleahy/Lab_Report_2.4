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
 wait(2);
}
{for (float i=1000.0; i<5000.0; i+=50) {
spkr.period(1.0/i);
spkr=0.5;
wait(2);
}
 spkr=0.0;
 while(pot1.read() < 0.5) {} // this uses the pot to control the program
 }
}

}