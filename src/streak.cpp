#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int current = 0;
    int max_streak = 0;
    int x;

    for (int i = 0; i < n; ++i) {
        cin >> x;
        if (x == 1) {
            current++;
            if (current > max_streak) {
                max_streak = current;
            }
        } else {
            current = 0;
        }
    }
    cout << max_streak << '\n';
    return 0;
}

