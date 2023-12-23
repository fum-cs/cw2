// M. Amintoosi
// Here we used a Function and introduce auto keyword
// auto
#include <iostream>
#include <limits>
using namespace std;

auto find_farthest(int v[], int n)
{
    auto ans = -1;
    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++)
            if (abs(v[i] - v[j]) > ans)
                ans = abs(v[i] - v[j]);
    return ans;
}
int main()
{
    int v[] = {2, 1, 3, 5, 4}, n = 5;
    cout << find_farthest(v, n) << endl;
}