#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;
    int cn = n;
    int max = 0;
    int cnt = 0;
    int last;
    
    while(cn != 0)
    {
        last = cn % 10;
        cn = cn / 10;
        if(last > max)
        {
            max = last;
        }
    }
    
    while(n != 0)
    {
        last = n % 10;
        n = n / 10;
        if(last == max)
        {
            cnt++;
        }
    }
    
    if(max == 0)
    {
        cout << max << " " << 1;
    }
    else
    {
        cout<< max << " " << cnt;
    }
}
