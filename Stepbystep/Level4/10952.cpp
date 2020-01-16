#include <cstdio>

int main() {
    int a[1000];
    int b[1000];
    int i = 0;
    while(1)
    {
        scanf("%d %d",&a[i],&b[i]);
        if(a[i]==0 && b[i]==0)
            break;
        i++;
    }

    for(int j = 0; j < i; j++)
    {
        printf("%d\n",a[j]+b[j]);
    }
    return 0;
}
