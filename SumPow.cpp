#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;
    long long sum = 0;
    
    for(int i = 1; i <= n; i++)
    {
        long long prod = 1;
        for(int j = 1; j <= i; j++)
        {
            prod = prod * i;
        }
        sum = sum + prod;
    }
    cout<< "Rezultatul este " << sum;
}
