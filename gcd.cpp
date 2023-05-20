#include <iostream>
#include <ctime>
using namespace std;

int gcd(int a, int b)
{
    // find the maximum of a and b
    int mx = max(a, b);
    // find the minimum of a and b
    int mn = min(a, b);
    // if mn is 0 then return mx
    if (mn == 0 || mx == 0)
    {
        return mx;
    }

    for (int i = mn; i > 0; i--)
    {
        if (mx % i == 0 && mn % i == 0)
        {
            return i;
        }
    }

    return 1;
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