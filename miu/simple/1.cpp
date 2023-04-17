#include <iostream>
#include <array>
int largestAdjacentSum(int a[], int len)
{
    int max = 0;
    for (int i = 0; i < len - 1; i++)
    {
        int sum = a[i] + a[i + 1];
        if (sum > max)
        {
            max = sum;
        }
    }
    std::cout << max << std::endl;
    return 0;
}

int main()
{
    int a[] = {1, 1, 1, 1, 1, 2, 1, 1, 1};
    std::cout << "Largest adjacent sum is: ";
    largestAdjacentSum(a, sizeof(a) / sizeof(a[0]));

    return 0;
}