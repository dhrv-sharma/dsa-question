#include <iostream>
using namespace std;
#include <cstdlib>
#include <vector>
#include <climits> // for int_min and int_max

int reverse(int x)
{

    int num = abs(x);
    int size = 0;

    // Calculate the number of digits in the number
    for (long i = 10; num > 0; i *= 10)
    {
        size++;
        num = num / 10;
    }

    // Create a vector to store the digits of the number
    // The error you're encountering, "variable length array bound evaluates to non-positive value 0," is because you're trying to declare an array (arr) with a size of size, but size might evaluate to zero in certain cases.
    std::vector<int> arr(size);

    num = abs(x);
    for (int i = 0; i < size; i++)
    {
        arr[i] = num % 10;
        num = num / 10;
    }
    // Use long long for a
    long long a = 1;
    long long rt_num = 0;
    for (long i = size - 1; i >= 0; i--)
    {
        if (arr[i] * a > INT_MAX || arr[i] * a <= INT_MIN)
        {
            return 0;
        }
        rt_num = rt_num + (arr[i]) * a;
        a = a * 10;
    }

// checking the max and min accepted limited values in cpp
    if (rt_num <= INT_MIN || rt_num > INT_MAX)
    {
        return 0; // Overflow detected, return 0
    }

    if (x < 0)
    {
        rt_num = 0 - rt_num;
    }

    return rt_num;
}