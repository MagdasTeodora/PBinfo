#include <fstream>

using namespace std;

fstream fin("maxim3.in");
ofstream fout("maxim3.out");

int main()
{
    int max;

    for(int i = 0; i < 3; i++)
    {
        int a;
        fin>> a;
        if(a >= max)
        {
            max = a;
        }
    }
    fout<< max;
}
