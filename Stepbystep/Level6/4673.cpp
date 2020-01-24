//
// Created by HHS on 2020-01-25.
//
#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;
int d(int);
int main () {
    vector<int> n;
    for(int i = 0; i <= 10000; i++)
    {
        n.push_back(i);
    }
    vector<int> v;
    vector<int> res;
    for(int i = 0; i < 10000; i++)
    {
        v.push_back(d(i));
    }
    sort(v.begin(),v.end());
    res.resize(v.size());
    set_difference(n.begin(),n.end(),v.begin(),v.end(),res.begin());
    for(int i = 0; i < res.size(); i++)
    {
        if(res[i] == 0)
            break;
        printf("%d\n",res[i]);
    }
    return 0;
}

int d(int n)
{
    int res = n + (n%100000)/10000 + (n%10000)/1000 + (n%1000)/100 + (n%100)/10 + n%10;
    return res;
}
