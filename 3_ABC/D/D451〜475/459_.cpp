#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string S;
        cin >> S;
        int N = S.size();
        vector<int> cnt(26, 0);

        for (char c : S) {
            cnt[c - 'a']++;
        }

        int mx = 0;
        for (int x : cnt) {
            mx = max(mx, x);
        }

        if (mx > (N + 1) / 2) {
            cout << "No\n";
            continue;
        }

        sort(S.begin(), S.end());
        string ans(N, ' ');
        int idx = 0;

        for (char c : S) {
            ans[idx] = c;
            idx += 2;
            if (idx >= N) {
                idx = 1;
            }
        }

        cout << "Yes\n";
        cout << ans << '\n';
    }
}
