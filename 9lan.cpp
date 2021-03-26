#include <fstream>

using namespace std;

ifstream fin("9lan.in");
ofstream fout("9lan.out");

int main()
{
    int n;
    fin >> n;

    if (n % 2 == 0)
    {
        fout << 1;
    }
    else
    {
        fout << 9;
    }
}
