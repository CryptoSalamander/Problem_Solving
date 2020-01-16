//
// Created by 하현수 on 2020/01/16.
//
#include <cstdio>

int main() {
    int cnt;
    scanf("%d",&cnt);
    int *a = new int[cnt];
    int *b = new int[cnt];
    for(int i = 0; i < cnt; i++)
    {
        scanf("%d %d",&a[i], &b[i]);
    }
    for(int i = 0; i < cnt; i++)
    {
        printf("Case #%d: %d + %d = %d\n",i+1,a[i],b[i],a[i]+b[i]);
    }
    return 0;
}
