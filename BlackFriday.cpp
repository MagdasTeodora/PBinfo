#include <fstream>

using namespace std;

ifstream fin("blackfriday.in");
ofstream fout("blackfriday.out");

int main()
{
    int n;
    fin >> n;

    long long initial[n + 1];
    long long redus[n + 1];

    for (int i = 1; i <= n; i++)
    {
        fin >> initial[i];
    }
    for (int i = 1; i <= n; i++)
    {
        fin >> redus[i];
    }

    int k = 1;
    double min = -1;
    for (int i = 1; i <= n; i++)
    {
        long long p1 = initial[i];
        long long p2 = redus[i];

        double procent = p2;
        procent = procent / p1;
        procent = 100 * procent;
        procent = 100 - procent;
        if (procent > min)
        {
            min = procent;
            k = i;
        }
    }

    fout << k;
}