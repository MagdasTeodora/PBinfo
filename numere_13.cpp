#include <iostream>

using namespace std;

// return_type
//string prima_litera(string name)

int prima_cifra(int nr)
{
    int cnr = nr;
    while(cnr >= 10)
    {
        cnr = cnr /10;
    }

    return cnr;
}

int main()
{
    int nr1;
    int nr2;
    int cnt = 0;
    
    cin >> nr1;
    cin >> nr2;

    while(nr1 != 0 && nr2 != 0)
    {
        int prima1 = prima_cifra(nr1);
        int prima2 = prima_cifra(nr2);
        
        if(prima1 == prima2)
        {
            cnt++;
        }
        
        cin >> nr1;
        cin >> nr2;
    }
    
    cout << cnt;
}
