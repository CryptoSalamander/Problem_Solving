//
// Created by 하현수 on 2020/01/29.
//
#include <iostream>
using namespace std;

int main() {
    string s;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    cin >> s;
    for(int i = 0; i < alphabet.length(); i++)
    {
        if(s.find(alphabet[i]) == string::npos)
            cout << -1 << " ";
        else{
            cout << s.find(alphabet[i]) << " ";
        }
    }
    return 0;
}
