#include <queue>
#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, K;
    cin >> N >> K;
    queue<int> qu;
    for (int i = 1; i <= N; i++)
        qu.push(i);
    cout << "<";
    while (1)
    {
        for (int i = 1; i < K; i++)
        {
            qu.push(qu.front());
            qu.pop();
        }
        cout << qu.front();
        qu.pop();
        if (qu.empty())
            break;
        else
            cout << ", ";
    }
    cout << ">" << endl;
    return 0;
}

/*
 * 1 2 3 4 5 6 7
 * 3 4 5 6 7 1 2
 * 1 2 4 5 6 7
 * 1 2 4 5 7
 * 1 4 5 7
 *
 *
 */