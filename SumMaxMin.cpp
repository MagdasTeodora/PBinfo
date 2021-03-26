#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;

    int min;
    cin>> min;
    int max = min;

    int a;

    for(int i = 1; i < n; i++)
    {
        cin>> a;

        if(a < min)
        {
            min = a;
        }
        if(a > max)
        {
            max = a;
        }
    }
    cout<< max + min;
}
