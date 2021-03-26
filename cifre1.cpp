#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;

    int max_cifra = 0;
    int max_nr = 0;
    int nr;
    for(int i = 0; i < n; i++)
    {
        cin>> nr;
        int a  = nr;
        while((a / 10) > 0)
        {
            a = a / 10;
        }

        if(a > max_cifra)
        {
            max_cifra = a;
            max_nr = nr;
        }
        else if(a == max_cifra)
        {
            max_cifra = a;
            if(nr > max_nr)
            {
                max_nr = nr;
            }
        }
    }
    cout<< max_nr;
}
