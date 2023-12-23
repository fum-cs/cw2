// M. Amintoosi
// Find the maximum distance between samples

//  This program uses a double loop to compare each pair of array elements. Then, it calculates the absolute value of the difference between the two numbers and compares it to the current value of the answer. If the new difference is greater than the answer, the answer is set to the new difference.
// This program works, but its runtime is O(n^2). The efficiency is not the matter here.
#include <iostream>
using namespace std;
int main()
{
    int v[] = {2, 1, 3, 5, 4};
    int n = sizeof(v) / sizeof(v[0]);
    int ans = -1;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (abs(v[i] - v[j]) > ans)
                ans = abs(v[i] - v[j]);
    cout << ans << endl;
}