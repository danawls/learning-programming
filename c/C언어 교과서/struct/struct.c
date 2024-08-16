#include<stdio.h>

struct king
{
int day;
int hour;
int min;
int sec;
};

int main (void) 
{
    struct king time[10];
    printf("What time is it?(day h min sec)\n");
    scanf("%d %d %d %d",&time[1].day, &time[1].hour, &time[1].min, &time[1].sec);
    printf("time is : %i %i %i %i\n", time[1].day, time[1].hour, time[1].min, time[1].sec);
    
}
