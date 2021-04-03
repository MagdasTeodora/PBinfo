#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int v[n + 1];
    int cnt_p = 0;
    int cnt_i = 0;

    for (int i = 1; i < n + 1; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 0)
        {
            cnt_p++;
        }
        else
        {
            cnt_i++;
        }
    }
    if (cnt_p > cnt_i)
    {
        cout << cnt_p - cnt_i;
    }
    else if (cnt_i > cnt_p)
    {
        cout << cnt_i - cnt_p;
    }
    else
    {
        cout << 0;
    }
}