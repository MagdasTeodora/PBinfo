#include <fstream>

using namespace std;

ifstream fin("vec.in");
ofstream fout("vec.out");

int main()
{
    int n;
    fin >> n;
    int v[n + 1];
    int sum = 0;

    for (int i = 1; i < n + 1; i++)
    {
        fin >> v[i];
    }

    for (int j = 1; j < n + 1; j++)
    {
        sum = sum + v[j];
    }

    fout << sum;
}