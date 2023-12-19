// M. Amintoosi
// find min and max
// limits
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
        auto a = numeric_limits<int>::max();
        auto b = numeric_limits<int>::min();
        for (auto e : v)
        {
            a = min(a,e);
            b = max(b,e);
        }
        return b-a;
    }
};
int main()
{
    vector<int> v = {2, 1, 3, 5, 4};
    Solution sol;
    cout << sol.find_farthest(v) << endl;
}