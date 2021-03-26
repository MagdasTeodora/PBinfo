#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin>> n;

    int cnt1 = 0;
    int cnt2 = 0;

    while((n / 10) > 0 || n > 0)
    {
        int last = n % 10;
        if(last == 2)
        {
            cnt1++;
        }
        else if(last == 3)
        {
            cnt2++;
        }
        n = n / 10;
        cout<< "last = " << last << " " << "n = " << n << " " << "cnt1 = " << cnt1 << " " << "cnt2 = " << cnt2 << "\n";
    }
    if(cnt1 > cnt2)
    {
        cout<< 2;
    }
    else if(cnt2 > cnt1)
    {
        cout<< 3;
    }
    else if(cnt1 == cnt2)
    {
        cout<< 2 << " " << 3;
    }
}
