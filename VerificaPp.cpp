#include <fstream>
#include <cmath>

using namespace std;

ifstream fin("verificapp.in");
ofstream fout("verificapp.out");

int main()
{
    int n;
    fin >> n;
    int radn = sqrt(n);

    if (radn * radn == n)
    {
        fout << "DA";
    }
    else
    {
        fout << "NU";
    }
}