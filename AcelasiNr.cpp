#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;
    int k;
    cin>> k;
    int a;
    int sum = 0;
    
    for(int i = 0; i < k; i++)
    {
        cin>> a;
        sum = sum + a;
    }
    
    if(sum == 0)
    {
        cout<< "DA";
    }
    else
    {
        cout<< "NU";
    }
}
