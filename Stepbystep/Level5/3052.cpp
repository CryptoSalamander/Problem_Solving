//
// Created by HHS on 2020-01-20.
//
#include <cstdio>
#include <cstring>
using namespace std;
int main() {
    int num[10];
    int r[42] = {0,};
    int sum = 0;

    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&num[i]);
        r[num[i]%42]++;
    }

    for(int i = 0; i < 42; i++)
    {
        if(r[i] != 0)
            sum++;
    }
    printf("%d",sum);
    return 0;
}
