#include <stdio.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
const int pollingDelay = 100;

void print_poem(){
    
    printf("у попа была собака, он её любил\n");
    printf("она съела кусок мяса, он её убил\n");
    printf("в землю закопал\n");
    printf("и надпись написал, что ");
    
    //sleep:
    #ifdef _WIN32
    Sleep(pollingDelay);
    #else
    usleep(pollingDelay*1000);  /* sleep for 100 milliSeconds */
    #endif
    
    print_poem();
   
}


int  main(){
    print_poem();
    return 0;
}
