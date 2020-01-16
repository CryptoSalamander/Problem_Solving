#include <cstdio>

int main() {
    int a[1000];
    int b[1000];
    int i = 0;
    while(scanf("%d %d",&a[i],&b[i]) != EOF)
    {
        i++;
    }

    for(int j = 0; j < i; j++)
    {
        printf("%d\n",a[j]+b[j]);
    }
    return 0;
}
