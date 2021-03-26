#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;

    string luni[12] = {"ianuarie", "februarie", "martie", "aprilie", "mai", "iunie", "iulie", "august", "septembrie", "octombrie", "noiembrie", "decembrie"};

    cout<< luni[n - 1];
}
