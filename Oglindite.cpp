#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;
int oglindit(int n)
{
    int og = 0;
    int cn = n;
    while(cn > 0)
    {
        og = og * 10;
        og = og + (cn % 10);
        cn = cn / 10;
    }
    return og;
}

int main()
{
    int n;
    cin>> n;
    int min = INT_MAX;
    int min_og = INT_MAX;
    
    for(int i = 0; i < n; i++)
    {
        int a;
        cin>> a;
        int oga = oglindit(a);
        int diff = abs(a - oga);
        
        if(diff == min_og)
        {
            if(a < min) 
            {
                min = a;
            }
        }
        else if(diff < min_og)
        {
            min_og = diff;
            min = a;
        }
    }
    
    cout<< min;
}
