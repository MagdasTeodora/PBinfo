#include <fstream>
using namespace std;

ifstream fin("ghiocel.in");
ofstream fout("ghiocel.out");

bool urcus(int a, int last)
{
    bool is_urcus = true;

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

    return is_urcus;
}

bool coboras(int a, int last)
{
    bool is_coboras = true;

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

    return is_coboras;
}

bool deal(int a, int last)
{
    bool is_deal = false;
    bool is_coboras = false;

    while (a != 0)
    {
        if (last <= a % 10)
        {
            is_coboras = true;
            last = a % 10;
            a = a / 10;
        }
        else if (is_coboras == true)
        {
            a = a / 10;
            if (urcus(a, last) == true)
                is_deal = true;
            else
                break;
        }
        else
        {
            break;
        }
    }
    return is_deal;
}

bool vale(int a, int last)
{
    bool is_vale = false;
    bool is_urcus = false;

    while (a != 0)
    {
        if (last >= a % 10)
        {
            is_urcus = true;
            last = a % 10;
            a = a / 10;
        }
        else if (is_urcus == true)
        {
            a = a / 10;
            if (coboras(a, last) == true)
                is_vale = true;
            else
                break;
        }
        else
        {
            break;
        }
    }
    return is_vale;
}
int main()
{
    int n;
    fin >> n;

    int a = 0;
    int last = 0;
    int cnt_urcus = 0;
    int cnt_coboras = 0;
    int cnt_deal = 0;
    int cnt_vale = 0;

    for (int i = 0; i < n; i++)
    {
        fin >> a;

        last = a % 10;
        a = a / 10;

        if (urcus(a, last))
        {
            cnt_urcus++;
        }
        else if (coboras(a, last))
        {
            cnt_coboras++;
        }
        else if (deal(a, last))
        {
            cnt_deal++;
        }
        else if (vale(a, last))
        {
            cnt_vale++;
        }
    }

    fout << cnt_urcus << "\n"
         << cnt_coboras << "\n"
         << cnt_deal << "\n"
         << cnt_vale;
}