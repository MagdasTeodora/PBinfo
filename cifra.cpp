#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int c;
    cin >> c;

    int cn = n;
    int cnt = 0;
    int sum = 0;

    while(cn != 0)
    {
        int last = cn % 10;

        if (last != c)
        {
            sum = sum + (last * pow(10, cnt));
            cnt++;
        }
        cn = cn / 10;
    }

    if (cnt == 0) {
        cout << -1;
    } else {
       cout << sum;
    }
}
