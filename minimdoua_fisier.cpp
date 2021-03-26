#include <fstream>
#include <bits/stdc++.h>

using namespace std;

ifstream fin("minimdoua.in");
ofstream fout("minimdoua.out");

int main()
{
    int n;
    fin>> n;
    
    
    int minim1 = INT_MAX;
    int minim2 = INT_MAX;
    
    for(int i = 0; i < n; i++)
    {
        int a;
    
        fin >> a;
        
        if(a > 10) 
        {
            int last = a % 10;
            int last2 = (a / 10) % 10;
            
            if(last == last2)
            {
                if(a <= minim2) 
                {
                    minim1 = minim2;
                    minim2 = a;
                }
                else if(a <= minim1)
                {
                    minim1 = a;
                }
            }
        }
    }
    
    if(minim1 == INT_MAX || minim2 == INT_MAX)
    {
        fout<< "numere insuficiente";
    }
    else
    {
        if(minim1 >= minim2)
        {
            fout<< minim2 << " " << minim1;
        }
        else
        {
            fout<< minim1 << " " << minim2;
        }
    }
}
