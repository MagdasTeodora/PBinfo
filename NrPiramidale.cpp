#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;
    int a = 0;

    for(int i = 1; i <= n; i++)
    {
        int patrat = i * i;
        a = a + patrat;
        cout<< a << " ";
    }
}
