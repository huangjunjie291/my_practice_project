#include<stdio.h>
#include<unistd.h>
#include<time.h>
//#include"J2H_time.h"

int main(int argc,char** argv)
{
    if(fork()>0) exit(0); //run in back
    while(1){
        sleep(1);
        PrintNowTimeGMT();
    }
    return 0;
}