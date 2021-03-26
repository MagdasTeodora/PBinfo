#include <iostream>

using namespace std;

int main()
{
    int ab;
    cin>> ab;

    int a = ab / 10;
    int b = ab % 10;

    if (ab <= 15)
        cout<< ab * ab;
    else if (ab >= 16 && ab <= 30)
        cout<< a + b;
    else
        cout<< a * b;
}
