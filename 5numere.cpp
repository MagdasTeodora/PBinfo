#include <iostream>

using namespace std;

int main()
{
    int size = 5;
    int numbers[size];

    //FOR(valoare initiala; conditie de terminare; increment)
    for(int i=0;i < size; i++) {
        cin >> numbers[i];
    }

    //[a, b, c, d, e]
    for (int i=0;i<size; ++i)
    {
        for(int j=i + 1;j<size; ++j)
        {
            int left = numbers[i];
            int right = numbers[j];

            if (left > right)
            {
                numbers[j] = left;
                numbers[i] = right;
            }
        }
    }

    cout<< numbers[2] + numbers[3] + numbers[4];

}
