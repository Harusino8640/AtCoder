#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
    int N;
    ll K;
    cin >> N >> K;

    vector<ll> r(N);

    for (int i = 0; i < N; i++) {
        ll A;
        cin >> A;
        r[i] = A % K;
    }

    sort(r.begin(), r.end());

    ll max_gap = 0;

    for (int i = 0; i < N - 1; i++) {
        max_gap = max(max_gap, r[i + 1] - r[i]);
    }

    max_gap = max(max_gap, r[0] + K - r[N - 1]);

    cout << K - max_gap << '\n';
}
