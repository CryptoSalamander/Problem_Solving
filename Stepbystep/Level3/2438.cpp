//
// Created by 하현수 on 2020/01/16.
//
#include <cstdio>
int main(){
    int a,i,j;
    scanf("%d",&a);
    for(i = 1; i <= a; i++)
    {
        for(j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
