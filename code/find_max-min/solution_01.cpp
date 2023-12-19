// M. Amintoosi
// پیدا کردن بیشینه فاصله‌ی نمونه‌ها
// راه حل‌های بسیاری هست، 
// راه حل اولی که ممکن است به ذهن برسد
// O(n^2)
#include <iostream>
using namespace std;
int main()
{
    int v[] = {2, 1, 3, 5, 4}, n = 5;
    int ans = -1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (abs(v[i] - v[j]) > ans)
                ans = abs(v[i] - v[j]);
    cout << ans << endl;
}