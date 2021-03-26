#include <fstream>

using namespace std;

fstream fin("sum.in");
ofstream fout("sum.out");

int main()
{
    int a;
    fin>> a;
    int b;
    fin>> b;

    fout << a + b;
}
