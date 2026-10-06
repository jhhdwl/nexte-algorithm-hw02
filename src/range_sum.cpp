#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<long long> pre(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        long long val;
        cin >> val;
        pre[i] = pre[i - 1] + val;
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << pre[r] - pre[l - 1] << '\n';
    }
    return 0;
}

