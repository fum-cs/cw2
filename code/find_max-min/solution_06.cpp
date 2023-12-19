// M. Amintoosi
// Range-based for loop, since C++11
#include <iostream>
#include <limits>
#include <vector>
using namespace std;
class Solution
{
public:
    auto find_farthest(vector<int> v)
    {
        auto ans = -1;
        for (auto a : v)
            for (auto b : v)
                ans = max(ans, abs(a - b));
        return ans;
    }
};
int main()
{
    vector<int> v = {2, 1, 3, 5, 4};
    Solution sol;
    cout << sol.find_farthest(v) << endl;
}