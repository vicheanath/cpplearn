#include <bits/stdc++.h>
#include <array>
using namespace std;

// Recusion
void recursion(int n)
{
    if (n == 0)
        return;
    cout << n << endl;
    recursion(n - 1);
}

// Recusion 2
void g(int n)
{
    if (n == 1)
        return;
    g(n - 1);
    g(n - 1);
    cout << n << endl;
}
// Complexity classes

// O(1) The running time of a constant-time algorithm does not depend on the
// input size. A typical constant-time algorithm is a direct formula that
// calculates the answer.
// O(log n) A logarithmic algorithm often halves the input size at each step. The
// running time of such an algorithm is logarithmic, because log2 n equals the
// number of times n must be divided by 2 to get 1.
// O(pn) A square root algorithm is slower than O(log n) but faster than O(n).
// A special property of square roots is that pn =n/pn, so the square root pn
// lies, in some sense, in the middle of the input.
// O(n) A linear algorithm goes through the input a constant number of times. This
// is often the best possible time complexity, because it is usually necessary to
// access each input element at least once before reporting the answer.
// O(n log n) This time complexity often indicates that the algorithm sorts the input,
// because the time complexity of efficient sorting algorithms is O(n log n).
// Another possibility is that the algorithm uses a data structure where each
// operation takes O(log n) time.
// O(n2) A quadratic algorithm often contains two nested loops. It is possible to
// go through all pairs of the input elements in O(n2) time.
// O(n3) A cubic algorithm often contains three nested loops. It is possible to go
// through all triplets of the input elements in O(n3) time.
// O(2n) This time complexity often indicates that the algorithm iterates through
// all subsets of the input elements. For example, the subsets of {1, 2, 3} are ;,
// {1}, {2}, {3}, {1, 2}, {1, 3}, {2, 3} and {1, 2, 3}.
// O(n!) This time complexity often indicates that the algorithm iterates through
// all permutations of the input elements. For example, the permutations of
// {1, 2, 3} are (1, 2, 3), (1, 3, 2), (2, 1, 3), (2, 3, 1), (3, 1, 2) and (3, 2, 1)

// Maximum subarray sum

void algorithm1()
{

    int best = 1;
    int n;
    cin >> n;
    for (int a = 0; a < n; a++)
    {
        for (int b = a; b < n; b++ 0)
        {
            int sum = 0;
            for (int k = a; k <= b; k++)
            {
                sum += array[k];
            }
            best = max(best, sum);
        }
    }
    cout << best << endl;

}

//  Sorting in C++

void shortal(){
    vector<int> v = {4,2,5,7,1,9,8,6};
    short(v.begin(),v.end());
    cout <<v<<endl;
}   

int main()
{
    shortal();
    return 0;
}