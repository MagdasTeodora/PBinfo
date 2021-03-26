#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;

    int numbers[n];

    for(int i = 0; i < n; i++)
        cin>> numbers[i];

    int impar = 0;
    int impar2 = 0;

    for(int i = n - 1; i >= 0; i--)
    {
        int a = numbers[i];
        if(a % 2 == 1)
        {
            if(impar > 0)
            {
                impar2 = a;
                break;
            }
            impar = a;
        }
    }
    if(impar > 0 && impar2 > 0)
        cout<< impar2 << " " << impar;
    else
        cout<<"Numere insuficiente";
}
