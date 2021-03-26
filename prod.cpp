#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin>> n;
    long long produs = 1;
    bool nr_impare = false;

    while((n / 10) > 0 || n > 0)
    {
        int a = n % 10;
        n = n / 10;
        if(a % 2 == 1)
        {
            produs = produs * a;
            nr_impare = true;
        }
    }
    if(nr_impare == true)
    {
        cout<< produs;
    }
    else
    {
        cout<< -1;
    }
}
