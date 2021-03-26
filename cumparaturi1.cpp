#include <iostream>

using namespace std;

int main()
{
    int s;
    cin>> s;

    int c;
    cin>> c;

    int n;
    cin>> n;

    if(s % c == 0 && s % n == 0)
        cout<< "CN";
    else if(s % c == 0)
        cout<< "C";
    else if(s % n == 0)
        cout<< "N";
    else
        cout<< "nimic";
}
