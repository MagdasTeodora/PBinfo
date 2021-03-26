#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;

    int par = -1;
    while((n / 10) > 0)
    {
        int ultima = n % 10;
        if(ultima % 2 == 0)
        {
            par = ultima;
            break;
        }
        n = n / 10;
    }

    if(par != -1)
    {
        cout<< par;
    }
    else if(n % 2 == 0)
    {
        cout<< n;
    }
    else
    {
        cout<< -1;
    }

}
