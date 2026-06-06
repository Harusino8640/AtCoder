#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
    int N, K, M;
    cin >> N >> K >> M;
    vector<vector<ll>> gems(N + 1);

    for (int i = 0; i < N; i++) {
        int C;
        ll V;
        cin >> C >> V;
        gems[C].push_back(V);
    }

    vector<ll> first;
    vector<ll> extra;
    for (int c = 1; c <= N; c++) {
        if (gems[c].empty()) continue;
        sort(gems[c].begin(), gems[c].end(), greater<ll>());
        first.push_back(gems[c][0]);
        for (int i = 1; i < gems[c].size(); i++) {
            extra.push_back(gems[c][i]);
        }
    }

    sort(first.begin(), first.end(), greater<ll>());

    ll ans = 0;
    for (int i = 0; i < M; i++) {
        ans += first[i];
    }

    vector<ll> remain;
    for (int i = M; i < first.size(); i++) {
        remain.push_back(first[i]);
    }

    for (ll x : extra) {
        remain.push_back(x);
    }

    sort(remain.begin(), remain.end(), greater<ll>());

    for (int i = 0; i < K - M; i++) {
        ans += remain[i];
    }

    cout << ans << endl;
    return 0;
}
