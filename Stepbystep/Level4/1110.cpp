//
// Created by 하현수 on 2020/01/16.
//
#include <cstdio>
int main() {
    int input;
    int n;
    int ten,one;
    int tmp;
    int i = 0;
    scanf("%d",&input);
    n = input;
    while(1)
    {
        i++;
        one = n % 10;
        ten = n / 10;
        tmp = (one + ten)%10;
        n = one * 10 + tmp;
        if(n == input)
            break;

    }
    printf("%d",i);

}