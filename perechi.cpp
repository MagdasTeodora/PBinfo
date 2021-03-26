#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;
    int last = -1;
    int cnt = 0;

    while(n != 0)
    {
        if(n < 0)
        {
            n = n * (-1);
        }
        int last1 = n % 10;

        if(last == last1)
        {
            cnt++;
        }
        last = last1;
        cin>> n;
    }
    cout<< cnt;
}
