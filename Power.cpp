#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>> a;

    int b;
    cin>> b;
    int pow = 1;

    for(int i = 0; i < b; i++)
    {
        pow = pow * a;
    }
    cout<< pow;
}
