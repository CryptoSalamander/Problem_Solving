//
// Created by HHS on 2020-02-09.
//
#include <iostream>
using namespace std;
int main() {
    int num,yy,xx;
    cin >> num;
    int *h;
    int *w;
    int *order;
    h = new int[num];
    w = new int[num];
    order = new int[num];
    for(int i = 0; i < num; i++)
        cin >> h[i] >> w[i] >> order[i];
    for(int i = 0 ; i < num; i++)
    {
        xx = order[i] / h[i] + 1;
        yy = order[i] % h[i];
        if(order[i] % h[i] == 0)
        {
            yy = h[i];
            xx--;
        }
        if(xx < 10)
            cout << yy << "0" << xx << '\n';
        else
            cout << yy << xx << '\n';
    }
}
