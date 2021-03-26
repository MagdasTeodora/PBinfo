#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;

    while(n > 99)
    {
        n = n / 10;
    }
    int a = n / 10;
    int b = n % 10;
    cout<< a + b;
}
