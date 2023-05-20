// The below code is used to find the maximum product of two numbers in a vector
// complexity: O(nlogn)

// importing libraries
#include <iostream>
#include <vector>
#include <algorithm>

// using namespace
using namespace std;

// main function
int main()
{
    // taking the number of elements user wants to input
    int n;
    // taking the input
    cin >> n;
    // declaring a vector of size n
    vector<int> a(n);
    // taking the input of the vector using for loop
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // sorting the vector
    sort(a.begin(), a.end());
    // printing the product of the last two elements
    cout << a[n - 1] * a[n - 2] << endl;
    return 0;
}