#include <iostream>

using namespace std;

int main()
{
    int n;
    int prod = 1;
    int prod2 = 1;
    cin>> n;

    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            prod = prod * i;
        }
        else if(i % 2 == 1)
        {
            prod2 = prod2 * i;
        }
    }

    if(prod > prod2)
    {
        cout<< "PARE";
    }
    else if(prod2 > prod)
    {
        cout<< "IMPARE";
    }
    else
    {
        cout<< "EGALE";
    }
}
