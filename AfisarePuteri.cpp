#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;

    int p;
    cin>> p;

    int prod = 1;
    cout<< prod << " ";

    while(prod * n <= p)
    {
        prod = prod * n;
        cout << prod << " ";
    }
}
