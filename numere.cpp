#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;

    int numbers[n];

    for(int i = 0; i < n; i++)
        cin>> numbers[i];

    for(int i = 0; i < n; i++)
    {
        int a = numbers[i];
        if(a % 2 == 0)
        {
            cout<< a;
            break;
        }
        else if(i == n -1)
        {
         cout<< "IMPOSIBIL";
        }
    }
}
