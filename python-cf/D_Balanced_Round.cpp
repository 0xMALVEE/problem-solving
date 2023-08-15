#include <iostream>
#include <vector>
#include <algorithm>

void solve() {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> a(n);

    for (int i = 0; i < n; ++i)
        std::cin >> a[i];

    std::sort(a.begin(), a.end());

    int cnt = 1;
    int ans = 1;

    for (int i = 1; i < n; ++i) {
        if (a[i] - a[i - 1] > k) {
            cnt = 1;
        } else {
            ++cnt;
        }
        ans = std::max(ans, cnt);
    }

    std::cout << n - ans << '\n';
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
