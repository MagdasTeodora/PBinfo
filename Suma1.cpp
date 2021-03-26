#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>> a;

    int last;
    int sum = 0;

    while(a != last)
    {
        sum = sum + a;
        last = a;
        cin>> a;
    }
    cout<< sum + a;
}
