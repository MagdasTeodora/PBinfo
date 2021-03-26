#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;

    int cn = n;
    int bn;
    int max = 0;

    while(cn != 0)
    {
        bn = cn % 10;
        if(bn >= max)
        {
            max = bn;
        }
        cn = cn / 10;
    }
    cout<< max;
}
