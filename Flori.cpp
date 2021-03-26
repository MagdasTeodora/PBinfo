#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;

    int r;

    if(n % 5 == 0)
    {
        r = n / 5;
        cout << r << "\n";
        cout << "DA" << "\n";
    }
    else
    {
        r = (n / 5) + 1;
        cout << r << "\n";
        cout << "NU" << "\n";
    }

    int sum = 0;
    int pas = 1;
    while(sum + (pas * 5) < n)
    {
        sum = sum + (pas * 5);
        pas++;
    }
    if(pas % 2 == 0)
        cout<< "panselute";
    else
        cout<< "micsunele";
}
