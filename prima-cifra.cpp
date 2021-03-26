#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    for(int i=0; i < n; i++)
    {
        int a;
        cin >> a;

        while((a / 10) > 0)
        {
            a = a / 10;
        }
        sum = sum + a;
    }

    cout<< sum;
}
