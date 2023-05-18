//Lab Report Speaker Experiment
#include "mbed.h"

//Declarations
DigitalIn fire(p14);
PwmOut spkr(p26);
AnalogIn pot1(p19);
float start = 2000.0;//start of floating loop variable
float end = 4000.0; //end of floating loop variable
float step = 100; //step of floating lopp variable
float loop =0;

int main() {
 while (loop < 2) {
for (float i=2000.0; i<10000.0; i+=100) {
spkr.period(1.0/i);
spkr=0.5;
wait(.2);
}

for (float i=start; i<end; i+=step) {
spkr.period(1.0/i);
spkr=0.5;
wait(0.1);

}
 spkr=0.0;
 while(pot1.read() < 0.5) {} // this uses the pot to control the program
 }
}
