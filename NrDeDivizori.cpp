#include <fstream>
#include <cmath>

using namespace std;

ifstream fin("nrdiv.in");
ofstream fout("nrdiv.out");

int main()
{
    int n;
    fin >> n;
    int rez = 0;
    int radn = sqrt(n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            rez++;
        }
    }
    fout << rez;
}