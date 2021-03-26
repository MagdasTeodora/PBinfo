#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;
    string c;
    cin>> c;
    
    for(int i = n; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<< c;
        }
        cout<< "\n";
    }
}
