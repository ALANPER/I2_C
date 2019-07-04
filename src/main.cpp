
#include "mbed.h"
#include "USBSerial.h"

int main() {
I2C dac(PB_9,PB_6);
USBSerial serial;
int address = 0x94;
char status1[1],chip1[1],status2[1],chip2[1];
status1[0]=0x2E;
chip1[0]=0x01;
while(1){
  dac.write(address,status1,1);
  dac.read(address,status2,1);
  dac.write(address,chip1,1);
  dac.read(address,chip2,1);
  serial.printf("Status: %d\nChip: %d\nAddress:0x%x\n",status2[0],chip2[0],address);
  wait(1);
  }
}



#include "mbed.h"

DigitalIn states={(PB_8),(PB_9)};
int pos==0;
USBSerial serial;
InterruptIn pinA
InterruptIn pinB
int main() {
    pinA.rise(&read_PinChange_riseA);
    pinA.fall(&read_PinChange_fallA);
    pinB.rise(&read_PinChange_riseB);
    pinB.fall(&read_PinChange_fallB);
    transition();
    while(1) {
       void read_PinChange_riseA () { 
    if PinB==0 
     POS ++;
  else PinB == 1 
     POS--; 
                }
       void read_PinChange_fallA () {    
        if PinB==1
           POS ++;
      else PinB == 1 
           POS--; 
                }
       void read_PinChange_riseB () {    
       if PinA==0
           POS --;
      else PinA == 1 
           POS++; 
                }     
        void read_PinChange_fallB () {    
       if PinA==1
           POS --;
      else PinA ==0 
           POS++; 
                }      
   }
}