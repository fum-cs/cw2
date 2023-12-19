// M. Amintoosi
// Class Solution
// max function
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
        for (int i = 0; i < v.size(); i++)
            for (int j = 0; j < v.size(); j++)
                ans = max(ans, abs(v[i] - v[j]));
        return ans;
    }
};
int main()
{
    vector<int> v = {2, 1, 3, 5, 4};
    Solution sol;
    cout << sol.find_farthest(v) << endl;
}