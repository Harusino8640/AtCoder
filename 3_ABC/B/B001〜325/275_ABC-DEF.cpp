#include <iostream>
using namespace std;

using ll = long long;

const ll MOD = 998244353;

int main() {
    ll A, B, C, D, E, F;
    cin >> A >> B >> C >> D >> E >> F;

    ll x = A % MOD;
    x = (x * (B % MOD)) % MOD;
    x = (x * (C % MOD)) % MOD;

    ll y = D % MOD;
    y = (y * (E % MOD)) % MOD;
    y = (y * (F % MOD)) % MOD;

    ll ans = (x - y + MOD) % MOD;

    cout << ans << '\n';
}
