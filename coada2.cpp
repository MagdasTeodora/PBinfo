#include <fstream>

using namespace std;

ifstream fin("coada2.in");
ofstream fout("coada2.out");

int main()
{
    long long x;
    fin>> x;
    long long y;
    fin>> y;
    long long z;
    fin>> z;
    
    if(x + 1 > y || x + 1 > z)
    {
        fout<< -1;
    }
    else
    {
        fout << y + z - x;
    }
}
