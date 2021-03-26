#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;

    int max = n;
    if(max == 0)
    {
        cout<< "NU EXISTA";
    }
    else
    {
        while(n != 0)
        {
            cin>> n;

            if(n > max)
            {
                max = n;
            }
        }
        cout<< max;
    }
}
