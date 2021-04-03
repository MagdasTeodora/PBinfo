#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int v[n + 1];
    cin >> v[1];
    int max = v[1];
    int min = v[1];

    for (int i = 2; i < n + 1; i++)
    {
        cin >> v[i];
        if (v[i] > max)
        {
            max = v[i];
        }
        if (v[i] < min)
        {
            min = v[i];
        }
    }

    cout << min << " " << max;
}