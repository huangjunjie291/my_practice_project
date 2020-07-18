#include<stdio.h>
#include<time.h>

void PrintNowTimeGMT()
{
    time_t now = time(NULL);
    printf("GTM: %s\n",ctime(&now));
}