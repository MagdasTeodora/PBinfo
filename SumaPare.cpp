#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>> a;
    int sum = 0;

    while(a != 0)
    {
        if(a % 2 == 0)
        {
            sum = sum + a;
        }
        cin>> a;
    }

    cout<< sum;
}
