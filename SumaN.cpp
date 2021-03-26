#include <fstream>

using namespace std;

ifstream fin("suman.in");
ofstream fout("suman.out");

int main()
{
    int n;
    fin >> n;

    int a;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        fin >> a;
        sum = sum + a;
    }

    fout << sum;
}