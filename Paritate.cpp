#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>> a;
    int b;
    cin>> b;

    int cnt = 0;
    int c = a % 10;
    int d = a / 10;
    int x = b % 10;
    int y = b / 10;


    if((a % 2 == 0 && b % 2 == 0) || (a % 2 == 1 && b % 2 == 1))
    {
        if(c % 2 == 0)
        {
            cnt++;
        }
        if(d % 2 == 0)
        {
            cnt++;
        }
        if(x % 2 == 0)
        {
            cnt++;
        }
        if(y % 2 == 0)
        {
            cnt++;
        }
    }
    else
    {
        if(c % 2 == 1)
        {
            cnt++;
        }
        if(d % 2 == 1)
        {
            cnt++;
        }
        if(x % 2 == 1)
        {
            cnt++;
        }
        if(y % 2 == 1)
        {
            cnt++;
        }
    }
    cout<< cnt;
}
