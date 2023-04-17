#include <iostream>
#include <array>
int isSequencedArray(int a[], int len, int m, int n)
{
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (a[i] >= m && a[i] <= n)
        {
            count++;
        }
    }
    return (count == n - m + 1) ? 1 : 0;
}

int main()
{
    int a[] = {1, 3, 4, 2, 5};
    std::cout << "Is sequenced array: " << isSequencedArray(a, sizeof(a) / sizeof(a[0]), 1, 9) << std::endl;
    return 0;
}