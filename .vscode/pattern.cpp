#include <iostream>
using namespace std;

void question_main()
{
    int n;
    cout << "Enter the number of rows " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < n; j++)
        {
            /* code */
            cout << "*";
        }
        cout << endl;
    }
}

void question_two(int n)
{
    for (int i = 1; i < n + 1; i++)
    {
        /* code */
        for (int j = 0; j < n; j++)
        {
            /* code */
            cout << i << " ";
        }
        cout << endl;
    }
}

void question_three(int n)
{
    for (int i = 1; i < n + 1; i++)
    {
        /* code */
        for (int j = 1; j < n + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

// n=3
// 1 2 3
// 4 5 6
// 7 8 9
void question_four(int n)
{
    int k = 1;
    for (int i = 1; i < n + 1; i++)
    {
        /* code */
        for (int j = 0; j < n; j++)
        {
            /* code */
            cout << k + j << " ";
        }
        k = k + n;

        cout << endl;
    }
}

// n=4
// *
// **
// ***
// ****

void question_five(int n)
{
    for (int i = 1; i < n + 1; i++)
    {
        /* code */

        for (int k = 1; k < i + 1; k++)
        {
            /* code */
            cout << "* ";
        }
        cout << endl;
    }
}

void question_six(int n)
{
    for (int i = 1; i < n + 1; i++)
    {
        /* code */
        for (int k = 1; k < i + 1; k++)
        {
            /* code */
            cout << i << " ";
        }
        cout << endl;
    }
}

// enter the number of rows
// 6
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20 21

void question_seven(int n)
{
    int count = 1;
    for (int i = 1; i < n + 1; i++)
    {
        /* code */
        for (int j = 1; j < i + 1; j++)
        {
            /* code */
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

// enter the number of rows
// 6
// 1
// 2 3
// 3 4 5
// 4 5 6 7
// 5 6 7 8 9
// 6 7 8 9 10 11

void question_eight(int n)
{
    int count = 1;
    for (int i = 1; i < n + 1; i++)
    {
        /* code */
        for (int j = 1; j < i + 1; j++)
        {
            /* code */
            cout << count << " ";
            count++;
        }
        count = count - (i - 1);
        cout << endl;
    }
}

void question_nine(int n)
{
    int count;
    // assume i representing the number of rows
    for (int i = 1; i < n + 1; i++)
    {
        /* code */
        count = i;
        for (int j = 1; j < i + 1; j++)
        {
            /* code */
            cout << count << " ";
            count--;
        }
        cout << endl;
    }
}

void question_ten(int n)
{
    char character[26] = {'A', 'B', 'C', 'D', 'E'};

    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < n; j++)
        {
            /* code */
            cout << character[i] << " ";
        }
        cout << endl;
    }
}

void question_elv(int n)
{
    for (int i = 1; i < n + 1; i++)
    {
        /* code */
        char val = 'A';
        for (int j = 1; j < n + 1; j++)
        {
            /* code */
            cout << val << " ";
            val = val + 1;
        }

        cout << endl;
    }
}

void question_twlv(int n)
{
    char val = 'A';
    for (int i = 1; i < n + 1; i++)
    {
        /* code */
        for (int j = 1; j < n + 1; j++)
        {
            /* code */
            cout << val << " ";
            val = val + 1;
        }
        cout << endl;
    }
}

void question_thrt(int n)
{
    char val = 'A';
    for (int i = 1; i < n + 1; i++)
    {
        /* code */
        for (int j = 1; j < n + 1; j++)
        {
            /* code */
            cout << val << " ";
            val = val + 1;
        }
        val = val - (n - 1);
        cout << endl;
    }
}

void question_frt(int n)
{
    char val = 'A';
    for (int i = 1; i < n + 1; i++)
    {
        /* code */
        for (int j = 1; j < i + 1; j++)
        {
            /* code */
            cout << val << " ";
        }
        val = val + 1;
        cout << endl;
    }
}

void question_fft(int n)
{
    char val = 'A';
    for (int i = 1; i < n + 1; i++)
    {
        /* code */
        for (int j = 1; j < i + 1; j++)
        {
            /* code */
            cout << val << " ";
            val = val + 1;
        }
        cout << endl;
    }
}

void question_sxt(int n)
{
    char val = 'A';
    for (int i = 1; i < n + 1; i++)
    {
        /* code */
        val = 'A';
        val = (val + n) - i;
        for (int j = 1; j < i + 1; j++)
        {
            /* code */
            cout << val << " ";
            val++;
        }
        cout << endl;
    }
}

void question_svt(int n)
{
    for (int i = 1; i < n + 1; i++)
    {
        /* code */
        for (int j = 1; j < n + 1; j++)
        {
            /* code */
            if (j < (n - i) + 1)
            {
                /* code */
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}

void question_egth(int n)
{
    for (int i = 1; i < n + 1; i++)
    {
        /* code */
        for (int j = 1; j < n + 1; j++)
        {
            /* code */
            if (j < (n - i) + 2)
            {
                /* code */
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void question_nnth(int n)
{
    for (int i = 1; i < n + 1; i++)
    {
        /* code */
        for (int j = 1; j < n + 1; j++)
        {
            if (j >= i)
            {
                /* code */
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

// enter the number of rows
// 5
    // 1    
//    121
//   12321
//  1234321
// 123454321

void question_twth(int n)
{
    for (int i = 1; i < n + 1; i++)
    {
        /* code */
        int value = 1;
        for (int j = 1; j < n * 2; j++)
        {
            /* code */
            int mid = (n * 2) / 2;
            int start = (mid - i) + 1;
            int end = (mid + i) - 1;

            if (j >= start && j <= end)
            {
                /* code */
                cout << value;
                if (j == mid || j > mid)
                {
                    /* code */
                    value--;
                }
                else
                {
                    value++;
                }
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "enter the number of rows" << endl;
    cin >> n;

    // question_main();
    // question_two(n);
    // question_three(n);
    // question_four(n);
    // question_five(n);
    // question_six(n);
    // question_seven(n);
    // question_eight(n);
    // question_nine(n);
    // question_ten(n);
    // question_elv(n);
    // question_twlv(n);
    // question_thrt(n);
    // question_frt(n);
    // question_fft(n);
    // question_sxt(n);
    // question_svt(n);
    // question_egth(n);

    // question_nnth(n);
    question_twth(n);
    return 1;
}