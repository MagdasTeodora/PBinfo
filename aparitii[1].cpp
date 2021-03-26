#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin>> n;

    int a = n % 10;
    int cnt = 0;

    if(n == 0)
    {
        cnt = 1;
    }
    else
    {
        int cn = n;

        while(cn != 0)
    {
        int last = cn % 10;
        if(a == last)
        {
            cnt++;
        }
        cn = cn / 10;
    }
    }

    cout<< cnt;
}
