
// importing the necessary libraries
#include <iostream>
#include <vector>

// using namespace
using namespace std;

// main function of the program to find the pairwise product
int main()
{
    // taking the number of elements user wants to input
    int n;
    cin >> n;
    // creating a vector of size n
    vector<int> a(n);
    // taking the input of the vector using for loop
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // initialize the max1 and max2 with smallest possible integer
    int max1 = INT16_MIN;
    int max2 = INT16_MIN;

    // finding the maximum and second maximum element in the vector
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max1)
        {
            max2 = max1;
            max1 = a[i];
        }
        else if (a[i] > max2)
        {
            max2 = a[i];
        }
    }

    // printing the product of the maximum and second maximum element
    cout << max1 * max2 << endl;
    return 0;
}
