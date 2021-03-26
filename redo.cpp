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

    for(int j = 0; j < n - 2; j++)
    {

        for(int i = 1; i <= n; i++)
        {
            if(i == 1 || i == n)
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
