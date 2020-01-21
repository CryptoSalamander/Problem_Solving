//
// Created by HHS on 2020-01-22.
//
#include <cstdio>
#include <vector>
using namespace std;
int main () {
    int a;
    int tmp1,tmp2 = 0;
    scanf("%d",&a);
    char **input = new char*[a];
    for(int i = 0; i < a; i++)
    {
        input[i] = new char[80];
        scanf("%s",input[i]);
    }
    for(int i = 0; i < a; i++)
    {
        tmp1 = 0;
        tmp2 = 0;
        for(int j = 0; input[i][j] != '\0'; j++)
        {
            if(input[i][j] == 'O')
            {
                tmp1++;
                tmp2 += tmp1;
            }
            else if(input[i][j] == 'X')
            {
                tmp1 = 0;
            }
        }
        printf("%d\n",tmp2);
    }
    return 0;
}
