//
// Created by 하현수 on 2020/01/20.
//
#include <cstdio>
#include <vector>
#include <numeric>
using namespace std;
int main() {
    int cnt;
    float a;
    float maxvalue;
    vector<float> v;
    scanf("%d",&cnt);

    for(int i = 0; i < cnt; i++)
    {
        scanf("%f",&a);
        v.push_back(a);
    }
    maxvalue = *max_element(v.begin(),v.end());
    for (auto iter = v.begin(); iter != v.end(); iter++)
    {
        *iter = *iter / maxvalue * 100;
    }
    printf("%f",accumulate(v.begin(), v.end(), 0.0) / v.size());
    return 0;
}
