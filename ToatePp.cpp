#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a;
    int c;
    cin >> c;

    if (c == 1)
    {
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;

            int radn = sqrt(a);
            if (radn * radn == a)
            {
                cnt++;
            }
        }
        cout << cnt;
    }
    else if (c == 2)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;

            int radn = sqrt(a);
            if (radn * radn == a)
            {
                sum = sum + a;
            }
        }
        cout << sum;
    }
    else if (c == 3)
    {
        int max_pp = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;

            int radn = sqrt(a);
            if (radn * radn == a)
            {
                if (a > max_pp)
                {
                    max_pp = a;
                }
            }
        }
        cout << max_pp;
    }
    else if (c == 4)
    {
        int max_pp = 0;
        int max_pp2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;

            int radn = sqrt(a);
            if (radn * radn == a)
            {
                if (a > max_pp)
                {
                    max_pp2 = max_pp;
                    max_pp = a;
                }
                else if (a > max_pp2)
                {
                    max_pp2 = a;
                }
            }
        }
        cout << max_pp2 << " " << max_pp;
    }
}