#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;
    int k;
    cin>> k;

    for(int i = 0; i < n; i++)
    {
        cout<< "1";
    }
    cout << "01";
    for(int i = 0; i < k; i++)
    {
        cout << "0";
    }
    cout<< "10";
}
