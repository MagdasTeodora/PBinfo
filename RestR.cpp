#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;
    
    int r;
    cin>> r;
    
    long long a;
    
    int cnt = 0;
    
    for(int i = 0; i < n; i++)
    {
        cin>> a;
        long long ca = a;
        int sum = 0;
        int last;
        
        while(ca > 0)
        {
            last = ca % 10;
            sum = sum + last;
            ca = ca / 10;
        }
        
        if(sum % 9 == r)
        {
            cnt++;
        }
    }
    
    cout<< cnt;
}
