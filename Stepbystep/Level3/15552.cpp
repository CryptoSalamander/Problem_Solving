//
// Created by 하현수 on 2020/01/16.
//
#include <cstdio>
int main()
{
    int num,i,in1,in2;
    int result;
    scanf("%d",&num);
    for(i = 0; i < num; i++)
    {
        scanf("%d %d",&in1,&in2);
        printf("%d\n",in1+in2);
    }
    return 0;
}
