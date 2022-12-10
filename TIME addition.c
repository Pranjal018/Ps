#include <stdio.h>
struct time{
    int hour;
    int min;
    int sec;
};
int main()
{
struct time t1,t2,t3;
printf("enter first time:\n");
scanf("%d:%d:%d",&t1.hour,&t1.min,&t1.sec);
printf("enter second time:\n");
scanf("%d:%d:%d",&t2.hour,&t2.min,&t2.sec);
t3.hour=t1.hour+t2.hour;
t3.min=t1.min+t2.min;
t3.sec=t1.sec+t2.sec;
if(t3.min>59)
{
    t3.hour++;
    t3.min=t3.min-60;
}
printf("SUM = %d:%d:%d",t3.hour,t3.min,t3.sec);
return 0;
}