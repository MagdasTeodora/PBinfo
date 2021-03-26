#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;
    int last;
    int cn = n;
    int sum = 0;
    int og = 0;

    while(cn != 0)
    {
        last = cn % 10;
        cn = cn / 10;
        sum = sum + last;
    }

    while(sum > 0)
    {
        og = og * 10;
        og = og + (sum % 10);
        sum = sum / 10;
    }

    cout<< og;
}
