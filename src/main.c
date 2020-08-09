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
    sprintf(logFilePath,"%s/log/logFile",getenv("HOME"));
    logFilefd = fopen(logFilePath,O_RDWR|O_APPEND|O_CREAT);
    fclose(logFilefd);
    while(1){
        sleep(3);
        PrintNowTimeGMT();
        print("OK!all right~\n");
    }
    return 0;
}
