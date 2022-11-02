#include <iostream>
#include <vector>

using namespace std;
#define ll long long
#define pb push_back

int main() {
    int tc, k;
    cin >> tc >> k;

    int kth_sc = 0;

    vector<int> arr;

    for (int i = 1; i <= tc; i++) {
        int c;
        cin >> c;
        arr.push_back(c);
        if (k == i) {
            kth_sc = c;
        }
    }

    int next_round = 0;

    for (int i = 1; i <= tc; i++) {
        if (arr[i - 1] >= kth_sc && arr[i -1] >= 1) {
            next_round++;
        }
    }

    cout << next_round;

    return 0;
}