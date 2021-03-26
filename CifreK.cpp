#include <iostream>

using namespace std;

int main()
{
    int k;
    cin>> k;
    int a;
    int cnt = 0;

    while(a != 0)
    {
        cin>> a;
        int ck = a;
        if(a % 2 == 0)
        {
            while(ck != 0)
            {
                if(ck % 10 == k)
                {
                    cnt++;
                }
                ck = ck / 10;
            }
        }
    }

    cout<< cnt;
}
