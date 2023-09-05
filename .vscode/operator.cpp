#include <iostream>
using namespace std;

int subtractProductAndSum(int n)
{
    int sum = 0;
    int product = 1;
    while (true)
    {
        /* code */
        int a = n % 10;
        n = n / 10;
        cout << a << endl;
        sum += a;
        product = product * a;
        if (n == 0)
        {
            /* code */
            break;
        }
    }
    return product - sum;
}

int hammingWeight(uint32_t n)
{
    int count = 0;
    for (int i = 0; i < 32; i++)
    {
        // if ((n & 1) == 1): Check the least significant bit of n by performing a bitwise AND operation with 1. If the result is 1, it means the least significant bit is set (1), so increment the count variable.
        if ((n & 1) == 1)
        {
            count++;
        }
        n = n >> 1;
    }

    return count;
}

int main()
{
    subtractProductAndSum(234);
}