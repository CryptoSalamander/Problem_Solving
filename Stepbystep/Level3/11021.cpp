//
// Created by 하현수 on 2020/01/16.
//
#include <cstdio>
int main(void)
{
    int count;
    scanf("%d",&count);
    int *a = new int[count];
    int *b = new int[count];
    int c;
    int d;

    int i;
    for(i = 0; i < count; i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    for(i = 0; i < count; i++)
    {
        printf("Case #%d: %d\n",i+1,a[i]+b[i]);
    }
    return 0;
}
