#include <wiringPi.h>
#include <wiringPiI2C.h>


void initIR(){
    int PIN_IRL= 19;/CHANGE
    int PIN_IRC= 19;
    int PIN_IRR= 19;

}
int IRguide(int LS,int CE,int RS){
    
    return 0;//change
}

/*
Similar to this
def motor_speed():
    while True:
        left_detect  = int(left_sensor.value)
        right_detect = int(right_sensor.value)
        ## Stage 1
        if left_detect == 0 and right_detect == 0:
            left_mot = 1
            right_mot = 1
        ## Stage 2
        if left_detect == 0 and right_detect == 1:
            left_mot = -1
        if left_detect == 1 and right_detect == 0:
            right_mot = -1
        #print(r, l)
        yield (right_mot, left_mot)

Guide: https://www.youtube.com/watch?v=IhPRNucVhYM
*/