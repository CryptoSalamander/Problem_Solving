//
// Created by 하현수 on 2020/01/14.
//
#include <cstdio>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",a*(b%10));
    printf("%d\n",a*((b%100)/10));
    printf("%d\n",a*(b/100));
    printf("%d",a*b);
    return 0;
}
