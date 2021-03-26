#include <iostream>

using namespace std;

int main()
{
    int abc;
    cin>> abc;

    int a = abc / 100;
    int c = abc % 10;

    int ac = (a * 10) + c;

    cout<< ac * ac;
}
