#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
    ll N, K;
    cin >> N >> K;
    vector<ll> A(N + 1);

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    ll minA = A[1];
    for (int i = 2; i <= N; i++) {
        minA = min(minA, A[i]);
    }
    ll OK = 1;
    ll NG = minA + K + 1;

    while (NG - OK > 1) {//OKとNGが隣接するまで繰り返し、終了時のNGが求めたい最小値である。
        ll mid = OK + (NG - OK) / 2;
        ll need = 0;
        for (int i = 1; i <= N; i++) {
            if (A[i] < mid) {
                need += (mid - A[i] + i - 1) / i;
                if (need > K) {
                break;
                }
            }
        }
        if (need <= K) {
            OK = mid;
        } else {
            NG = mid;
        }
    }

    cout << OK << endl;
}
