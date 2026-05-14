#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <cmath>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    if (!(cin >> N)) return 0;
    vector<long long> A(N);
    for (int i = 0; i < N; ++i) cin >> A[i];
    vector<long long> pref(N+1, 0);
    for (int i = 0; i < N; ++i) pref[i+1] = pref[i] + A[i];

    long long ans = 0;
    for (int l = 0; l < N; ++l) {
        for (int r = l; r < N; ++r) {
            long long S = pref[r+1] - pref[l];
            bool ok = true;
            for (int i = l; i <= r; ++i) {
                if (S % A[i] == 0) { ok = false; break; }
            }
            if (ok) ++ans;
        }
    }
    cout << ans << '\n';
    return 0;
}
