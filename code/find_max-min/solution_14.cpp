// M. Amintoosi
// minmax_element, C++20
// g++ -std=c++20 solution_14.cpp -o solution_14
// You get error with: g++ -std=c++17 solution_14.cpp -o solution_14 

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
        auto [a, b] = ranges::minmax_element(v);
        return *b - *a;
    }
};
int main()
{
    vector<int> v = {2, 1, 3, 5, 4};
    Solution sol;
    cout << sol.find_farthest(v) << endl;
}