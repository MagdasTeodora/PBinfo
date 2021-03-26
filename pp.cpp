#include <fstream>
#include <cmath>

using namespace std;

ifstream fin("pp.in");
ofstream fout("pp.out");

int main()
{
    int n;
    fin>> n;
    int radn = sqrt(n);
    
    if(radn * radn == n)
    {
        fout<< n << " este patrat perfect";
    }
    else
    {
        fout<< n << " nu este patrat perfect";
    }
}
