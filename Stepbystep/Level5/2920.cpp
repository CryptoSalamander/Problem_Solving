//
// Created by HHS on 2020-01-19.
//
#include <cstdio>

int main() {
    int num[8];
    bool ascending = true;
    bool descending = true;
    for(int i = 0; i < 8; i++)
    {
        scanf("%d",&num[i]);
        if(num[i] != i+1)
            ascending = false;
        if(num[i] != 8-i)
            descending = false;
    }
    if(ascending)
    {
        printf("ascending");
        return 0;
    }

    else if(descending)
    {
        printf("descending");
        return 0;
    }
    printf("mixed");
    return 0;
}
