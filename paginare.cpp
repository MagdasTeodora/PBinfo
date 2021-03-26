#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;
    int vol = 0;
    int pag = 0;

    if(n == 0)
    {
        cout<< "IMPOSIBIL";
    }
    else
    {
        int cn = n;
        bool imposibil = false;
        while(cn > 0)
        {
            if(cn == 792)
            {
                vol++;
                pag = 300;
                cn = cn - 792;
            }

            else if(cn >= 792)
            {
                vol++;
                cn = cn - 792;
            }
            else if(cn < 10)
            {
                vol++;
                pag = cn;
                cn = 0;
            }
            else if(cn <= 189)
            {
                vol++;
                cn = cn - 9;
                pag = pag + 9;
                if(cn % 2 == 0)
                {
                    pag = pag + (cn / 2);
                    cn = 0;
                }
                else
                {
                    imposibil = true;
                    break;
                }
            }
            else
            {
                vol++;
                pag = pag + 99;
                cn = cn - 189;
                if(cn % 3 == 0)
                {
                    pag = pag + (cn / 3);
                    cn = 0;
                }
                else
                {
                    imposibil = true;
                    break;
                }
            }
        }

        if(imposibil == true)
        {
            cout<< "IMPOSIBIL";
        }
        else
        {
            cout<< vol<< " " << pag;
        }

    }
}
