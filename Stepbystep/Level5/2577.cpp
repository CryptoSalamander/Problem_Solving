//
// Created by HHS on 2020-01-19.
//
#include <cstdio>
#include <cstring>
using namespace std;
int main() {
    int a,b,c,tmp;
    int num[10] = { 0, };
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    char array[10];
    sprintf(array, "%d", a * b * c);
    for(int i = 0; i < strlen(array); i++)
    {
        num[array[i] - '0']++;
    }
    for(int i = 0; i < 10; i++)
    {
        printf("%d\n",num[i]);
    }
    return 0;
}
