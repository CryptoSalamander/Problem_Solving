//
// Created by HHS on 2020-02-06.
//
#include <string>
#include <iostream>
using namespace std;

int main() {
    char a[4];
    char b[4];
    int tmp;
    int rev_a, rev_b;
    cin >> a >> b;

    tmp = a[2];
    a[2] = a[0];
    a[0] = tmp;

    tmp = b[2];
    b[2] = b[0];
    b[0] = tmp;

    rev_a = atoi(a);
    rev_b = atoi(b);

    if(rev_a > rev_b)
        cout << rev_a;
    else
        cout << rev_b;

    return 0;
}
