#include <iostream>

using namespace std;

int main()
{
    int nr;
    cin>> nr;
    int ctr = 1;

    while(nr / 10 >= 1)
    {
        nr = nr / 10;
        ctr = ctr + 1;
    }
    cout<< ctr;
}
