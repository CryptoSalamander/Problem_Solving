#include <vector>
#include <numeric>
long long sum(std::vector<int> &a) {
    long long ans = 0;
    ans = accumulate(a.begin(),a.end(), 0.0);
    return ans;
}