#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;
    long long prod = 1;

    for(int i = 1; i <= n; i++)
    {
        prod = prod * i;
    }
    cout<< prod;
}
