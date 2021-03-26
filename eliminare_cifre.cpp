#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;

    for(int i =0; i< n; i++)
    {
        int nr;
        cin >> nr;

        //take last number
        int last = nr % 10;
        //copy the number
        int cnr = nr;

        //count the remaining numbers
        int cnt = 0;

        //final number
        int modifiedNr = 0;
        // 1 2 3 2 => 13

        //go through all the numbers and eliminate the last
        while(cnr != 0)
        {
            int a = cnr % 10;

            if(a != last)
            {
                modifiedNr = modifiedNr + (a * pow(10, cnt));
                cnt++;
            }
            cnr = cnr / 10;
        }

        sum = sum + modifiedNr;
    }

    cout << sum;
}
