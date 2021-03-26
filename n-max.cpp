#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;

    int a;
    int max;
    cin >> max;

    for(int i = 1; i < n; i++)
    {
        cin>> a;
        if(a > max)
        {
            max = a;
        }
    }

    cout<< max;

}
