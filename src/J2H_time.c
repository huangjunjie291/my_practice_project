#include<stdio.h>
#include<time.h>

void PrintNowTimeGMT()
{
    time_t now = time(NULL);
    printf("NOW GTM: %s\n",ctime(&now));
}

void PrintNowTimeLocal()
{
    time_t now = time(NULL);
    printf("NOW Local Time: %s\n",ctime(&now));
}