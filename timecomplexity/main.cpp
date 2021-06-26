#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n =10;
    for (int i = 1; i <= n; i++) // (0)n
    {
        // code
        cout<<i<<"\n";
    }

    for (int i = 1; i <= n; i++) // (On^2)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "i =" << i << "\n";
            cout << "j =" << j << "\n";
        }
    }
}