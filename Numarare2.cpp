#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int ma = 0;
    int v[n + 1];
    int cnt = 0;

    for (int i = 1; i < n + 1; i++)
    {
        cin >> v[i];
        ma = ma + v[i];
    }

    ma = ma / n;

    for (int i = 1; i < n + 1; i++)
    {
        if (v[i] > ma)
        {
            cnt++;
        }
    }

    cout << cnt;
}