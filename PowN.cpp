#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin>> n;
    
    int prod = 1;
    int cnt = 0;
    long long p;
    cin>> p;
    
    while(prod <= p)
    {
        cout<< prod << " ";
        cnt++;
        prod = pow(n, cnt);
    }
}
