#include<stdio.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include"J2H_time.h"

int main(int argc,char** argv)
{
    if(fork()>0) exit(0); //run in back
    int logFilefd;
    char* logFilePath;
    ssprintf(logFilePath,"%s/log/logFile",env("HOME"));
    logFilefd = open(logFilePath,O_RDWR|O_APPEND|O_CREATE);
    while(1){
        sleep(1);
        PrintNowTimeGMT();
    }
    return 0;
}