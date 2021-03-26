#include <iostream>

using namespace std;

int main()
{
    int ab;
    cin>> ab;

    int a = ab / 10;
    int b = ab % 10;
    int ba = (b * 10) + a;

    cout<< ba * ba;
}
