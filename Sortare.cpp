#include <fstream>

using namespace std;

ifstream fin("sortare.in");
ofstream fout("sortare.out");

int main()
{
    int n;
    fin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        fin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] < v[j])
            {
                swap(v[i], v[j]);
            }
        }

        fout << v[i] << " ";
    }
}