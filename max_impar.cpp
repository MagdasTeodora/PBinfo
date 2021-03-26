#include <iostream>
#include <math.h>

using namespace std;

int main()
{

        int nr;
        cin >> nr;

        //copy the number
        int cnr = nr;

        int max = 0;

        //go through all the numbers
        while(cnr != 0)
        {
            int last = cnr % 10;

            if(last % 2 == 1)
            {
                if(last > max) {
                    max = last;
                }
            }
            cnr = cnr / 10;
        }

    if(max == 0){
        cout << "nu exista";
    }
    else {
        cout << max;
    }
}


