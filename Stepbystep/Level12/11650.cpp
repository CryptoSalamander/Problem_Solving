//
// Created by HHS on 2020-03-02.
//
#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
using namespace std;
bool compare(pair<long,long> a, pair<long,long> b)
{

    if(a.first == b.first)
        return a.second < b.second;
    else
        return a.first < b.first;
}
int main() {
    int num;
    cin >> num;
    vector<pair<long,long>> arr;
    pair<long,long> tmp;
    for(int i = 0; i < num; i++)
    {
        cin >> tmp.first >> tmp.second;
        arr.push_back(tmp);
    }
    sort(arr.begin(),arr.end(),compare);
    for(int i = 0; i < num; i++)
        cout << arr[i].first << ' ' << arr[i].second << '\n';
}
