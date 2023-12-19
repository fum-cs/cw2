// M. Amintoosi
// begin(v), rbegin
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
        // sort(begin(v),end(v));
        sort(v.begin(),v.end());
        return *v.rbegin()-*v.begin();
    }
};
int main()
{
    vector<int> v = {2, 1, 3, 5, 4};
    Solution sol;
    cout << sol.find_farthest(v) << endl;
}