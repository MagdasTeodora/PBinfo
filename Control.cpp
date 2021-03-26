#include <iostream>

using namespace std;
int suma_cifre(int n)
{
    int cn = n;
    int cif_sum = 0;
    while(cn != 0)
    {
        int last = cn % 10;
        cn = cn / 10;
        cif_sum = cif_sum + last;
    }
    return cif_sum;
}
int main()
{
    int n;
    cin>> n;
    int cifSum = suma_cifre(n);
    
    while(cifSum > 9)
    {
        cifSum = suma_cifre(cifSum);
    }
    cout<< cifSum;
}
