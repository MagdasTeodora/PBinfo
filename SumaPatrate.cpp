#include <iostream>

using namespace std;

int main()
{
    int abc;
    cin>> abc;

    int a = abc / 100;
    int b = (abc / 10) % 10;
    int c = abc % 10;

    int sum = (a * a) + (b * b) + (c * c);
    cout<< sum;
}
