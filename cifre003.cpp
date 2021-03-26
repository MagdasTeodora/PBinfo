#include <iostream>
#include <math.h>

using namespace std;

int nr_cifre(int n)
{
    int cnt = 0;
    
    while(n != 0)
    {
        n = n / 10;
        cnt++;
    }
    return cnt;
}

int eliminaNumar(int nr, int index)
{
    int cnt = 0;
    int pas = 0;
    int cifre = 0;
    
    while(nr != 0)
    {
        int last = nr % 10;
        
        if(pas != index)
        {
            cifre = cifre + (last * pow(10, cnt));
            cnt++;
        }
        
        pas++;
        nr = nr / 10;
    }
    
    return cifre;
}

int main()
{
    int n;
    cin>> n;
    
    int numarCifre = nr_cifre(n);
    int cnt = 0;
    
    for(int i = 0; i < numarCifre; i++)
    {
        int newNr = eliminaNumar(n, i);
        
        if(newNr % 3 == 0)
        {
            cnt++;
        }
    }
    cout<< cnt;
}
