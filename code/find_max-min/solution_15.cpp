// M. Amintoosi
// minmax_element, C++17, structured bindings
// You get error with: g++ -std=c++11 solution_15.cpp -o solution_15 

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
        auto [a, b] = minmax_element(v.begin(), v.end());
        return *b - *a;
    }
};
int main()
{
    vector<int> v = {2, 1, 3, 5, 4};
    Solution sol;
    cout << sol.find_farthest(v) << endl;
}