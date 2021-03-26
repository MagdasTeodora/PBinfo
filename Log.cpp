#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;
    int m;
    cin>> m;
    int cnt = 0;
    int prod = 1;
    while(prod != m)
    {
        prod = prod * n;
        cnt++;
    }
    
    cout<< cnt;
}
