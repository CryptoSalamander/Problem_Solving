//
// Created by HHS on 2020-03-02.
//
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool compare(char a,char b)
{
    if(a <= b)
        return false;
    else
        return true;
}
int main() {
    string a;
    int N;
    cin >> N;
    a = to_string(N);
    sort(a.begin(),a.end(),compare);
    cout << a;
}
