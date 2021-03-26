#include <fstream>

using namespace std;

fstream fin("n_suma.in");
ofstream fout("n_suma.out");

int main()
{
    int n;
    fin>> n;
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        int a;
        fin>> a;
        sum = sum + a;
    }
    fout<< sum;
}
