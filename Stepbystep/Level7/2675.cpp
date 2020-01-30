//
// Created by 하현수 on 2020/01/30.
//
#include <iostream>
#include <string>
using namespace std;
int main() {
    int a;
    cin >> a;
    int* recursive = new int[a];
    string* str = new string[a];
    for(int i = 0; i < a; i++)
    {
        cin >> recursive[i];
        cin >> str[i];
    }
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < str[i].length(); j++)
        {
            for(int k = 0; k < recursive[i]; k++)
                cout << str[i][j];
        }
        cout << '\n';
    }
}
