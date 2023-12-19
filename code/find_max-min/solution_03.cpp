// M. Amintoosi
// Vectors and 
//     trailing return type
// In C++11, there are two syntaxes for function declaration:
//     return-type identifier ( argument-declarations... )
// and the "trailing return type" with Arrow: ->
//     auto identifier ( argument-declarations... ) -> return_type

#include <iostream>
#include <limits>
#include <vector>
using namespace std;
auto find_farthest(vector<int> v) -> int
{
    auto ans = -1;
    for (int i = 0; i < v.size(); i++)
        for (int j = 0; j < v.size(); j++)
            if (abs(v[i] - v[j]) > ans)
                ans = abs(v[i] - v[j]);
    return ans;
}
int main()
{
    vector<int> v = {2, 1, 3, 5, 4};
    // vector v = {2, 1, 3, 5, 4}; //C++17
    cout << find_farthest(v) << endl;
}