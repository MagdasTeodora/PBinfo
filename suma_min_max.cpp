#include <iostream>
#include <math.h>

using namespace std;

int main()
{

        int nr;
        cin >> nr;

        //copy the number
        int cnr = nr;

        int min = nr;
        int max = 0;

        //go through all the numbers
        while(cnr != 0)
        {
            int last = cnr % 10;

            if(last > max) {
                max = last;
            }
            else if(last < min) {
                min = last;
            }

            cnr = cnr / 10;
        }


    cout << max + min;
}

