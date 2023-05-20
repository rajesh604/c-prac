// program to find gcd

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    // base case
    if (b == 0)
    {
        return a;
    }
    // recursive case
    return gcd(b, a % b);
}

int main()
{
    clock_t start = clock();
    int a = 12, b = 15;
    cout << gcd(a, b) << endl;
    clock_t end = clock();
    cout << "Time: " << (end - start) / (double)CLOCKS_PER_SEC << endl;
    return 0;
}
