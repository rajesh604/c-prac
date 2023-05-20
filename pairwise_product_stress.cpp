// create a stress test
// for the pairwise product
// function

#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <cassert>

using std::cin;
using std::cout;
using std::vector;

long long MaxPairwiseProduct(const vector<int> &numbers)
{
    long long result = 0;
    int n = numbers.size();
    int max_index1 = -1;
    for (int i = 0; i < n; ++i)
    {
        if ((max_index1 == -1) || (numbers[i] > numbers[max_index1]))
        {
            max_index1 = i;
        }
    }
    int max_index2 = -1;
    for (int j = 0; j < n; ++j)
    {
        if ((j != max_index1) && ((max_index2 == -1) || (numbers[j] > numbers[max_index2])))
        {
            max_index2 = j;
        }
    }
    result = (long long)numbers[max_index1] * numbers[max_index2];
    return result;
}

long long MaxPairwiseProductFast(const vector<int> &numbers)
{
    int n = numbers.size();
    int max_index1 = -1;
    for (int i = 0; i < n; ++i)
    {
        if ((max_index1 == -1) || (numbers[i] > numbers[max_index1]))
        {
            max_index1 = i;
        }
    }
    int max_index2 = -1;
    for (int j = 0; j < n; ++j)
    {
        if ((j != max_index1) && ((max_index2 == -1) || (numbers[j] > numbers[max_index2])))
        {
            max_index2 = j;
        }
    }
    return (long long)numbers[max_index1] * numbers[max_index2];
}

int main()
{
    while (true)
    {
        int n = rand() % 10 + 2;
        cout << n << "\n";
        vector<int> a;
        for (int i = 0; i < n; ++i)
        {
            a.push_back(rand() % 100000);
        }
        for (int i = 0; i < n; ++i)
        {
            cout << a[i] << ' ';
        }
        cout << "\n";
        long long res1 = MaxPairwiseProduct(a);
        long long res2 = MaxPairwiseProductFast(a);
        if (res1 != res2)
        {
            cout << "Wrong answer: " << res1 << ' ' << res2 << "\n";
            break;
        }
        else
        {
            cout << "OK\n";
        }
    }
    return 0;
}