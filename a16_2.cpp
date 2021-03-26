#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>> a;
    long long prod = 1;
    
    for(int i = 0; i < 16; i++)
    {
        prod = prod * a;
    }
    
    cout<< prod;
}
