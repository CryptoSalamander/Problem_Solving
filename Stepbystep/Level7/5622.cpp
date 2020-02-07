//
// Created by HHS on 2020-02-06.
//
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cin >> str;
    int sec = 0;
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] <= 67)
            sec += 3;
        else if(str[i] <= 70)
            sec += 4;
        else if(str[i] <= 73)
            sec += 5;
        else if(str[i] <= 76)
            sec += 6;
        else if(str[i] <= 79)
            sec += 7;
        else if(str[i] <= 83)
            sec += 8;
        else if(str[i] <= 86)
            sec += 9;
        else if(str[i] <= 90)
            sec += 10;
    }
    cout << sec;
    return 0;
}
