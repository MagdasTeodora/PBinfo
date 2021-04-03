#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] > v[j])
            {
                swap(v[i], v[j]);
            }
        }
        cout << v[i] << " ";
    }
}