#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;

    int nr;

    if (n % 100 == 0)
        nr = n;
    else
        nr = ((n / 100) + 1) * 100;

    cout<< nr;

}
