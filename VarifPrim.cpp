#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    int cnt = 0;
    long long radn = sqrt(n);

    for (long long i = 1; i <= radn; i++)
    {
        if (n % i == 0)
        {
            cnt = cnt + 2;
        }
    }

    if (cnt == 2)
    {

        cout << "DA";
    }
    else
    {
        cout << "NU";
    }
}