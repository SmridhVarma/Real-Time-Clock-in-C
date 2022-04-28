#include <stdio.h>
int main()
{
    int hour,minute,second;
    printf("Enter the current time \n");
    printf("Enter the hours  : \n");
    scanf("%d",&hour);
    printf("Enter the minutes: \n");
    scanf("%d",&minute);
    printf("Enter the seconds: \n");
    scanf("%d",&second);
    while(4<5){
        second++;
        if(second>59){
           second=0;
           minute++;
        }
        if(minute>59){
            minute=0;
            hour++;
        }
        if(hour>12){
            hour=0;
        }
        printf("\n%d :%d :%d\n",hour,minute,second);
        sleep(1);
    }
    return 0;
}
