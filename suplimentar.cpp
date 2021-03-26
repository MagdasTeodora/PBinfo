#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;

    int i = n;
    while (i >= 0) {
        cout<< i << "\n";
        i-=2;

        if (i < 10)
            break;
    }
}
