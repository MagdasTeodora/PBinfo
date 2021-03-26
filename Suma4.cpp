#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long sum = 0;
    for (long long i = 1; i <= n; i++)
    {
        sum = sum + pow(i, 4);
    }
    cout << sum % 10;
}