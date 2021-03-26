#include <fstream>

using namespace std;

ifstream fin("urcus.in");
ofstream fout("urcus.out");

int main()
{
    int n;
    fin >> n;

    int a = 0;
    int last = 0;
    int cnt = 0;
    bool is_urcus = true;

    for (int i = 0; i < n; i++)
    {
        is_urcus = true;
        fin >> a;
        
        last = a % 10;
        a = a / 10;

        while (a != 0)
        {
            if (last <= a % 10)
            {
                is_urcus = false;
                break;
            }
            last = a % 10;
            a = a / 10;
        }

        if (is_urcus == true)
        {
            cnt++;
        }
    }

    fout << cnt;
}