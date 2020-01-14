//
// Created by 하현수 on 2020/01/14.
//
#include <cstdio>
int main(void)
{
    int h,m;
    scanf("%d %d",&h,&m);
    if(m-45 >= 0)
        printf("%d %d",h,m-45);
    else
    if(h == 0)
        printf("23 %d",15+m);
    else
        printf("%d %d",h-1,15+m);
    return 0;
}
