#include<stdio.h>
#include<time.h>

void PrintNowTimeGMT()
{
    time_t now = time(NULL);
    printf("NOW GTM: %s\n",ctime(&now));
    printf("OK\n");
}
