#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;
    int cnt = 0;
    int cnt2 = 0;
    int cn = n;

    while(cn != 0)
    {
        cnt++;
        cn = cn / 10;
    }
    cout<< cnt;
}
