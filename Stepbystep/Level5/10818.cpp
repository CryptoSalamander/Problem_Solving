#include <iostream>
using namespace std;

int main() {
    int N,tmp;
    int mymax = -1000001;
    int mymin = 1000001;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> tmp;
        if(tmp > mymax)
            mymax = tmp;
        if(tmp < mymin)
            mymin = tmp;
    }
    cout << mymin << ' ' << mymax;
}