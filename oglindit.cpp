#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;
    int og = 0;

    while(n > 0)
    {
        og = og * 10 + (n % 10);
        n = n / 10;
    }

    cout<< og;
}
