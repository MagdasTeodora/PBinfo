#include <iostream>

using namespace std;

int main()
{
    int z;
    cin>> z;
    int pb;
    cin>> pb;
    int b;
    cin>> b;
    int pt;
    cin>> pt;
    int t;
    cin>> t;
    if(pb == pt)
    {
        cout<< pb;
    }
    else if(pb < pt)
    {
        while(pb < pt && z > 0)
        {
            z--;
            pb = pb + b;
            pt = pt + t;
        }
        if(pb >= pt)
        {
            cout<< pb;
        }
        else
        {
            cout<< -1;
        }
    }
    else
    {
        while(pt < pb && z > 0)
        {
            z--;
            pt = pt + t;
            pb = pb + b;
        }
        if(pt >= pb)
        {
            cout<< pt;
        }
        else
        {
            cout<< -1;
        }
    }
}
