#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>> x;
    int t;
    cin>> t;
    int y;
    cin>> y;
    int cnt = 0;
    double cx = x;
    
    while(cx > y)
    {
        cx = cx * 0.75;
        cnt++;
    }
    
    cout<< t * cnt;
}
