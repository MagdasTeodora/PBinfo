#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin>> n;

    int k;
    cin>> k;
    int ctr = 0;

    while((n / 10 ) > 0)
    {
        ctr++;
        n = n / 10;
    }
    cout<< n;
    for(int i = 0; i < ctr * k; i++)
    {
        cout<< 0;
    }
}
