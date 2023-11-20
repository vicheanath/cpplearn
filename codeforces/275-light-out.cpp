#include <bits/stdc++.h>

using namespace std;

int main()
{
    // codeforces/275-light-out.cpp
    int a[3][3], b[3][3];
    for (int i = 0; i < 3; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < 3; j++)
        {
            a[i][j] = s[j] - '0';
            b[i][j] = 1;
        }
    }


    return 0;
}