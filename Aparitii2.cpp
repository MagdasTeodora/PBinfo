#include <fstream>

using namespace std;

ifstream fin("minimdoua.in");
ofstream fout("minimdoua.out");

int main()
{
    int n;
    fin>> n;
    int a;
    int minim1 = 0;
    int minim2 = 0;

    for(int i = 0; i < n; i++)
    {
        fin>> a;
        int last = a % 10;
        int last2 = (a / 10) % 10;

        if(last == last2)
        {
            if(minim1 == 0)
            {
                minim1 = a;
            }
            else if(a <= minim1)
            {
                if(minim2 == 0)
                {
                    minim2 = a;
                }
                else if
                minim2 = a;
            }
            else if(a >= minim2)
            {
                minim1 = a;
            }
        }
    }

    if(minim1 == 0 || minim2 == 0)
    {
        fout<< "numere insuficiente";
    }
    else
    {
        if(minim1 >= minim2)
        {
            fout<< minim2 << " " << minim1;
        }
        else
        {
            fout<< minim1 << " " << minim2;
        }
    }
}
