#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>> a;

    int b;
    cin>> b;

    string semn;
    cin >> semn;

    if (semn == "+")
        cout<< a + b;
    else if (semn == "-")
    {
        if (a > b)
            cout<< a - b;
        else
            cout<< b - a;
    }
    else if (semn == "*")
        cout<< a * b;
    else if (semn == "/")
    {
        if(a > b)
            cout<< a / b;
        else
            cout<< b / a;
    }
    else
        cout<< a % b;
}

