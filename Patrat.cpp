#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;

    string c;
    cin>> c;
    string d;
    cin>> d;

    for(int i = 0; i < n; i++)
    {
        cout<< c;
    }
    cout<< "\n";

    for(int i = 0; i < n - 2; i++)
    {
        for(int i = 0; i < n; i++)
        {
            if(i == 0 || i == n - 1)
            {
                cout<< c;
            }
            else
            {
                cout<< d;
            }
        }
        cout<< "\n";
    }

    for(int i = 0; i < n; i++)
    {
        cout<< c;
    }
}
