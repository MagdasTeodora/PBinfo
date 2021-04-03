#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int v[n + 1];

    for (int i = 1; i < n + 1; i++)
    {
        cin >> v[i];
    }
    int last = v[n];

    for (int i = 1; i < n + 1; i++)
    {
        if (v[i] % last == 0)
        {
            cout << v[i] << " ";
        }
    }
}