#include <fstream>

using namespace std;

ifstream fin("maxim.in");
ofstream fout("maxim.out");

int main()
{
    int a;
    fin>> a;
    int b;
    fin>> b;
    if(a >= b)
    {
        fout<< a;
    }
    else if(b > a)
    {
        fout<< b;
    }
}
