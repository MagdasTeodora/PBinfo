#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;

    int a = 1;

    while(a * (a + 1) < n)
    {
        a++;
    }

    if(a * (a + 1) == n)
        cout<< a  << " " << a + 1;
    else
        cout<< "NU EXISTA";
}
