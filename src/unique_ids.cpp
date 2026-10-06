#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    auto last = unique(a.begin(), a.end());
    a.erase(last, a.end());

    cout << a.size() << '\n';
    for (size_t i = 0; i < a.size(); ++i) {
        if (i > 0) cout << ' ';
        cout << a[i];
    }
    cout << '\n';
    return 0;
}
