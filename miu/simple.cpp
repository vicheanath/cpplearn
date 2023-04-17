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
int checkConcatenatedSum(int n, int catlen){
    // check if n is the sum of catlen consecutive numbers
    int sum = 0;
    for (int i = 0; i < catlen; i++)
    {
        sum += n - i;
    }
    if (sum == n)
    {
        return 1;
    }
    return 0;
    

}

int main()
{
    // int a[] = {1, 1, 1, 1, 1, 2, 1, 1, 1};
    // largestAdjacentSum(a, sizeof(a) / sizeof(a[0]));

    int n = 198;
    int catlen = 2;
    std::cout << checkConcatenatedSum(n, catlen) << std::endl;

    return 0;
}