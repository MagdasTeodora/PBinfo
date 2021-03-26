#include <fstream>

using namespace std;

ifstream fin("af.in");
ofstream fout("af.out");

int main()
{
    int n;
    fin >> n;
    
    for(int i = 0; i < n; i++)
    {
        long long nr1;
        fin>> nr1;
        string semn;
        fin>> semn;
        long long nr2;
        fin>> nr2;
        string eq;
        fin >> eq;
        long long nr3;
        fin >> nr3;
        
        long long res;
        bool egale = false;
        
        if(semn == "+")
        {
            res = nr1 + nr2;
            egale = res == nr3;
        }
        else if(semn == "-")
        {
            res = nr1 - nr2;
            egale = res == nr3;
        }
        else if(semn == "x")
        {
            res = nr1 * nr2;
            egale = res == nr3;
        }
        else if(semn == ":")
        {
            if(nr2 == 0)
            {
                egale = false;
            }
            else
            {
                res = nr1 / nr2;
                egale = res == nr3;
            }
        }
        
        if(egale == true)
        {
            fout << "Adevarat";
        }
        else
        {
            fout<< "Fals";
        }
        fout<< "\n";
    }
}
