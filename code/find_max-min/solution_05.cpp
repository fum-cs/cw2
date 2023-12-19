// M. Amintoosi
// iterators, for_each, lambda expression
#include <iostream>
#include <limits>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    auto find_farthest(vector<int> v)
    {
        auto ans = -1;
        for (auto a = v.begin(); a != v.end(); a++)
            for (auto b = v.begin(); b != v.end(); b++)
                ans = max(ans, abs(*a - *b));
        return ans;
    }
};
int main()
{
    vector<int> v = {2, 1, 3, 5, 4};
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
        cout << *it << ' ';
    cout << endl;
    
    for (auto it = v.begin(); it != v.end(); ++it)
        cout << *it << ' ';
    cout << endl;

    // fn() operate on *it
    for_each(v.begin(), v.end(), [](auto x)
             { cout << x << ' '; });
    cout << endl;
    Solution sol;
    cout << sol.find_farthest(v) << endl;
}