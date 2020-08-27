/* This is an i/o bound c program as the rate at which this process progresses 
   is limited by the speed of the i/o sub system */
/* This happens because the process waits for i/o and usually takes far less cpu 
   time than a cpubound process */
#include<stdio.h>
int main(){
    while(1){
        printf("IIITA\n");

    }
    return 0;
}