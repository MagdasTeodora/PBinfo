#include <iostream>

using namespace std;

int main()
{
    int a = -1;

    int cnt = 0;
    while(a != 0)
    {
        cin>> a;
        if(a % 2 == 1)
            cnt++;
    }
    cout<< cnt;
}
