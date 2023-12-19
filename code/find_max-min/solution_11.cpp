// M. Amintoosi
// min_element and max_element
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
        auto a = *min_element(v.begin(),v.end()); 
        auto b = *max_element(v.begin(),v.end()); 
        return b-a;
    }
};
int main()
{
    vector<int> v = {2, 1, 3, 5, 4};
    // cout << min({2, 1, 3, 5, 4});
    Solution sol;
    cout << sol.find_farthest(v) << endl;
}