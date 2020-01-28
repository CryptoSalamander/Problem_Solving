//
// Created by 하현수 on 2020/01/28.
//
#include <cstdio>
bool h(int);
int main() {
    int count = 0;
    int n;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)
    {
        if(h(i))
            count++;
    }
    printf("%d",count);
    return 0;
}

bool h(int num) {
    int hundred, ten, one;
    if(num < 100)
        return true;
    else {
        hundred = num / 100;
        ten = (num % 100) / 10;
        one = num % 10;

        if((one - ten) == (ten - hundred))
            return true;
    }
    return false;
}
