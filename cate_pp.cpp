#include <fstream>
#include <cmath>

using namespace std;

ifstream fin("catepp.in");
ofstream fout("catepp.out");

int main()
{
    int n;
    fin>> n;
    int a;
    int cnt = 0;
    
    for(int i = 0; i < n; i++)
    {
        fin>> a;
        int radn = sqrt(a);
        if(radn * radn == a)
        {
            cnt++;
        }
    }
    
    fout<< cnt;
}
