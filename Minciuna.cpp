#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>> x;
    
    int y;
    cin>> y;
    
    int a = 0;
    int b = 0;

    if(x > y)
    {
        a = y;
        b = x;
    }
    else
    {
        a = x;
        b = y;
    }

    if(a % 2 == 0)
    {
        if(a + 1 == b)
        {
            cout<< "Andrei e mai responsabil";
        }
        else
        {
            cout<< "minciuna";
        }
    }
    else if(a % 2 == 1)
    {
        if(a + 1 == b)
        {
            cout<< "Andrei e mai responsabil";
        }
        else
        {
            cout<< "minciuna";
        }
    }
}
