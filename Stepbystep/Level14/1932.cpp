//
// Created by 하현수 on 2020/04/06.
//
#include <iostream>
#include <algorithm>
#define MAX 501
using namespace std;
int N;
int tri[MAX][MAX];
int mymax;
int main()
{
    cin >> N;
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cin >> tri[i][j];
            if(j == 0)
                tri[i][j] = tri[i-1][j] + tri[i][j];
            else if(j == i)
                tri[i][j] = tri[i-1][j-1] + tri[i][j];
            else
                tri[i][j] = max(tri[i-1][j-1],tri[i-1][j])+tri[i][j];
            if(mymax < tri[i][j])
                mymax = tri[i][j];
        }
    }
    cout << mymax;
}

