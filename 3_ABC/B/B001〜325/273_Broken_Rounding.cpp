#include <iostream>
using namespace std;

using ll = long long;

int main() {
    ll X;
    int K;
    cin >> X >> K;

    ll base = 10;

    for (int i = 0; i < K; i++) {

        ll rem = X % base;

        // 切り捨て
        X -= rem;

        // 切り上げ判定
        if (rem >= base / 2) {
            X += base;
        }

        base *= 10;
    }

    cout << X << '\n';
}
