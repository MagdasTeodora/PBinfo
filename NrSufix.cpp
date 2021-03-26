#include <fstream>
#include <math.h>

using namespace std;

ifstream fin("nrsufix.in");
ofstream fout("nrsufix.out");

int main()
{
    int x;
    fin>> x;
    
    int a;
    fin >> a;
    
    int cnt = 0;
    int cx = x;
    int lastSuffix;
    
    while(cx != 0)
    {
        cx = cx / 10;
        cnt++;
    }
    
    while(a > 0)
    {
        int suffix = pow(10, cnt);
        if(a == x)
        {
            lastSuffix = a;
        }
        else if((a % suffix) == x)
        {
            lastSuffix = a;
        }
        int prev = a;
        fin >> a;
        if (a == prev)
        {
            break;
        }
    }
    
    fout << lastSuffix;
}
