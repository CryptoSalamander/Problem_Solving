//
// Created by 하현수 on 2020/04/05.
//
#include <iostream>
int dp[1000001];
using namespace std;

int main() {
    int X;
    cin >> X;

    for(int i = 2; i <= X; i++)
    {
        dp[i] = 1+dp[i-1];
        if(i % 2 == 0)
            dp[i] = min(dp[i],dp[i/2]+1);
        if(i % 3 == 0)
            dp[i] = min(dp[i],dp[i/3]+1);
    }
    cout << dp[X];
}

