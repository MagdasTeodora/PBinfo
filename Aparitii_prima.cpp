#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;
    int cnt = 0;
    int cn = n;
    int first;

    while(cn != 0)
    {
        first = cn % 10;
        cn = cn / 10;
    }
    cn = n;
    while(cn != 0)
    {
        if(cn % 10 == first)
        {
            cnt++;
        }
        cn = cn / 10;
    }
    if(cnt == 0)
    {
        cout<< 1;
    }
    else
    {
        cout<< cnt;
    }
}
