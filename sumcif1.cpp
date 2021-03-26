#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;
    int cn = n;
    int sum = 0;
    int cnt = 1;
    int a;
    while(cn != 0)
    {
        a = cn % 10;
        if(cnt % 2 == 0)
        {
            sum = sum + a;
        }
        cnt++;
        cn = cn / 10;
    }
    
    cout<< sum;
}
