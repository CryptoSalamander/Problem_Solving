//
// Created by 하현수 on 2020/01/14.
//
#include <cstdio>

int main() {
    int years;
    scanf("%d",&years);

    if(years%4 == 0 && years%100 != 0)
        printf("1");
    else if(years%400 == 0)
        printf("1");
    else
        printf("0");
    return 0;
}
