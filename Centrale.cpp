#include <fstream>
#include <cmath>

using namespace std;

ifstream fin("centrale.in");
ofstream fout("centrale.out");

int main()
{
    int n;
    fin >> n;
    int cntNrCentrale = 0;

    for (int i = 0; i < n; i++)
    {
        int a;
        fin >> a;
        int ca = a / 10; // eliminam ultima cifra
        int prev = ca % 10;

        bool esteNrCentral = false;
        while (ca != 0)
        {
            int current = ca % 10;
            if (ca / 10 != 0) // elimina prima cifra a numarului
            {
                if (prev == current)
                {
                    esteNrCentral = true;
                }
                else
                {
                    esteNrCentral = false;
                    break;
                }
            }
            ca = ca / 10;
        }

        if (esteNrCentral)
        {
            cntNrCentrale++;
        }
    }

    fout << cntNrCentrale;
}