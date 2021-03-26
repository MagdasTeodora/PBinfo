#include <iostream>
#include <math.h>

using namespace std;

int eliminaNumar(int nr, int conditie)
{
    int cnt = 0;
    int cifre = 0;
    
    while(nr != 0)
    {
        int last = nr % 10;
        
        if(last % 2 == conditie)
        {
            cifre = cifre + (last * pow(10, cnt));
            cnt++;
        }
        
        nr = nr / 10;
    }
    
    return cifre;
}

int par_impar(int nr)
{
    if(nr % 2 == 0)
    {
        return eliminaNumar(nr, 0);
    }
    else
    {
        return eliminaNumar(nr, 1);
    }
}

int main()
{
    int nr1;
    cin>> nr1;
    int nr2;
    cin>> nr2;
    int parImpar1 = par_impar(nr1);
    int parImpar2 = par_impar(nr2);
    
    if(parImpar1 > parImpar2)
    {
        cout<< nr1;
    }
    else if(parImpar2 > parImpar1)
    {
        cout<< nr2;
    }
    else
    {
        if(nr1 >= nr2)
        {
            cout<< nr1;
        }
        else
        {
            cout<< nr2;
        }
    }
}
