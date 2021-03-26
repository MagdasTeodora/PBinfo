#include <fstream>

using namespace std;

ifstream fin("maximpar.in");
ofstream fout("maximpar.out");

int main()
{
    int n;
    fin>>n;
    int a;
    int cnt = 0;
    int max = -1;

    for(int i = 0; i < n; i++)
    {
        fin>> a;
        if(a % 2 == 0)
        {
            if(a == max)
            {
                cnt++;
            }
            if(a > max)
            {
                max = a;
                cnt = 1;
            }
        }

    }

    fout<< max;

    if(max != -1)
    {
        fout << " " << cnt;
    }


}
