#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin>> n;
    int a;
    
    for(int i = 0; i < n; i++)
    {
        cin>> a;
        bool ppf = false;
        
        int root = floor(sqrt(a));
        
        if(root * root == a)
        {
            ppf = true;
        }
        
        if(ppf == true)
        {
            cout<< "DA";
        }
        else
        {
            cout<< "NU";
        }
        cout<< "\n";
    }
}
