#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n % 3 != 0)
    {
        cout<< "NU EXISTA";
    }
    else
    {
        int b = n / 3;
        int a = b - 1;
        int c = b + 1;
        
        cout<< a << " " << b << " " << c;
    }
}
