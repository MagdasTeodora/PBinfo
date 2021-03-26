#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    int cnt = 0;

    while(a != 0)
    {
        if(a % 2 == 0)
        {
            cnt++;
        }
        cin >> a;
    }
    if(cnt == 0)
        cout<< "NU EXISTA";
    else
        cout << cnt;
}
