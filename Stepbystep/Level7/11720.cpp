//
// Created by 하현수 on 2020/01/29.
//
#include <cstdio>

int main() {
    int n;
    int sum = 0;
    char c;
    scanf("%d",&n);
    getchar();
    for(int i = 0; i < n; i++)
    {
        c = getchar();
        sum += c - '0';
    }
    printf("%d",sum);
}
