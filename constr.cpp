#include <iostream>

using namespace std;

int sum(int a)
{
    int sum_cif = 0;

    while (a != 0)
    {
        int last = a % 10;
        sum_cif = sum_cif + last;
        a = a / 10;
    }

    return sum_cif;
}

int main()
{
    int n;
    cin >> n;

    int x[n];
    int y[n];

    for (int i = 1; i <= n; i++)
    {
        cin >> x[i];
    }

    for (int i = 1; i <= n; i++)
    {
        y[i] = x[i] % sum(x[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << y[i] << " ";
    }
}