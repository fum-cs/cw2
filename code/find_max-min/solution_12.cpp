// M. Amintoosi
// C++20 min_element and max_element 
// g++ -std=c++20 solution_12.cpp -o solution_12
// On my WSL I have g++==11
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
        auto a = *ranges::min_element(v); 
        auto b = *ranges::max_element(v); 
        return b-a;
    }
};
int main()
{
    vector<int> v = {2, 1, 3, 5, 4};
    Solution sol;
    cout << sol.find_farthest(v) << endl;
}