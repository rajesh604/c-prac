// write fibonacci
#include <iostream>
using namespace std;

int fib(int n)
{
    // solve using array
    int f[n + 2];
    // initializing the array with constant value
    f[0] = 0;
    f[1] = 1;
    // loop to calculate the fibonacci
    for (int i = 2; i <= n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    // return the nth fibonacci number
    return f[n];
}

int main()
{
    int n = 100;
    cout << fib(n) << endl;
    return 0;
}