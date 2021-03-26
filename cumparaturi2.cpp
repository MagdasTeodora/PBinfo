#include <iostream>

using namespace std;

int main()
{
    int s;
    cin>> s;

    int d;
    cin>> d;

    int r;
    cin>> r;

    int m;
    cin>> m;

    if (s >= d)
        cout<< "drona";
    else if (s <= d && s >= r)
        cout<< "robot";
    else if (s <= r && s >= m)
        cout<< "masina";
    else
        cout<< "nimic";
}
