#include "Activity_1.h"
#include "Activity_3.h"

void InitializePWM(void){
    TCCR1A=(1<<COM1A1)|(1<<WGM11)|(1<<WGM10);
    TCCR1B=(1<<CS11)|(1<<WGM12)|(1<<CS10);
    DDRB|=(1<<PB1);
}

void GeneratePWM(uint16_t Temp){
    InitializePWM();
    if(Temp>=0 && Temp<=200){
        OCR1A = 204.8;
        DelayMilliSecond(200);
    }
    else if(Temp>=201 && Temp<=500){
        OCR1A = 409.6;
        DelayMilliSecond(200);
    }
    else if(Temp>=501 && Temp<=700){
        OCR1A = 716.8;
        DelayMilliSecond(200);
    }
    else{
        OCR1A = 972.8;
        DelayMilliSecond(200);
    }
}
