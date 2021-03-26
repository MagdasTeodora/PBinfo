#include <fstream>
#include <iostream>

using namespace std;

fstream fin("rapunzel.in");
ofstream fout("rapunzel.out");

int main()
{
    long long n;
    fin>> n;
    long long cn = n;
    long long m1;
    fin>> m1;
    long long m2;
    fin>> m2;
    
    long long distanta = m1 + m2;

    long long cnt = cn / distanta;
    if(n % distanta != 0)
    {
        cnt++;
    }
    
    fout<< cnt;
}
