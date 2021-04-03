#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int v[n][2];

    //populam vectorul v cu inaltime si pozitia initiala
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v[i][0] = a;
        v[i][1] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i][0] > v[j][0])
            {
                swap(v[i], v[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i][1] << " ";
    }
}