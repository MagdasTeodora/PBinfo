#include <fstream>

using namespace std;

ifstream fin("coboras.in");
ofstream fout("coboras.out");

int main()
{
    int n;
    fin >> n;

    int a = 0;
    int last = 0;
    int cnt = 0;
    bool is_coboras = true;

    for (int i = 0; i < n; i++)
    {
        is_coboras = true;
        fin >> a;

        last = a % 10;
        a = a / 10;

        while (a != 0)
        {
            if (last >= a % 10)
            {
                is_coboras = false;
                break;
            }
            last = a % 10;
            a = a / 10;
        }

        if (is_coboras == true)
        {
            cnt++;
        }
    }

    fout << cnt;
}