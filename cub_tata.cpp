#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;

    for(int j = 0; j < n; j++)
    {
        for(int i = 0; i < n; i++)
        {
            string sign = "*";

            if(i % 5 == 0)
            {
                sign = "=";
            }
            else if(i % 3 == 0)
            {
                sign = "-";
            }
            else if(i % 2 == 1)
            {
                sign = "+";
            }

            cout<< sign << " ";
        }
        cout<< "\n";
    }
}
