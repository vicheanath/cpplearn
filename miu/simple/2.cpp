#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

int checkConcatenatedSum(int n, int catlen)
{
    int total = 0;
    string str_n = to_string(n);
    for (int i = 0; i < str_n.length(); i++)
    {
        total += stoi(string(catlen, str_n[i]));
    }
    return (total == n) ? 1 : 0;
}

int main()
{
    cout << checkConcatenatedSum(198, 2) << endl;   // expected output: 1
    cout << checkConcatenatedSum(198, 3) << endl;   // expected output: 0
    cout << checkConcatenatedSum(2997, 3) << endl;  // expected output: 1
    cout << checkConcatenatedSum(2997, 2) << endl;  // expected output: 0
    cout << checkConcatenatedSum(13332, 4) << endl; // expected output: 1
    cout << checkConcatenatedSum(9, 1) << endl;     // expected output: 1
    return 0;
}
