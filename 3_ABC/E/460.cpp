#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
using ll = long long;
const ll MOD = 998244353;

ll gcd(ll a, ll b) {
    while (b) {
        ll t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    vector<ll> pow10(19);
    pow10[0] = 1;
    for (int i = 1; i < 19; i++) {
        pow10[i] = pow10[i - 1] * 10;
    }

    while (T--) {
        ll N;
        ll M;
        cin >> N >> M;

        int len = to_string(N).size();

        ll ans = 0;

        ll p = 1 % M;

        for (int d = 1; d <= len; d++) {
            p = (p * 10) % M;

            ll r = (p - 1 + M) % M;
            ll g = gcd(M, r);

            ll L = M / g;

            ll cntX = N / L;

            ll cntY;
            if (d < len) {
                cntY = 9 * pow10[d - 1];
            } else {
                cntY = N - pow10[d - 1] + 1;
            }

            ans = (ans +
                   (cntX % MOD) * (cntY % MOD)) % MOD;
        }

        cout << ans % MOD << '\n';
    }

    return 0;
}
