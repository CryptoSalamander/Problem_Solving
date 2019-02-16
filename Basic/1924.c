#include <stdio.h>
int main()
{
    int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int m,d,i;
    int count=0;
    scanf("%d %d",&m,&d);
    for(i = 1; i < m; i++)
        count = count+a[i];
    count = count+d;
    if(count%7 == 0)
    {
        printf("SUN");
    }
    if(count%7 == 1)
    {
        printf("MON");
    }    
    if(count%7 == 2)
    {
        printf("TUE");
    }
    if(count%7 == 3)
    {
        printf("WED");
    }
    if(count%7 == 4)
    {
        printf("THU");
    }
    if(count%7 == 5)
    {
        printf("FRI");
    }
    if(count%7 == 6)
    {
        printf("SAT");
    }
    return 0;
}
