//
// Created by 하현수 on 2020/01/16.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,x;
    scanf("%d %d",&n,&x);
    int i;
    int arr[10000];
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        if(arr[i] < x)
            printf("%d ",arr[i]);
    }
    return 0;

}
