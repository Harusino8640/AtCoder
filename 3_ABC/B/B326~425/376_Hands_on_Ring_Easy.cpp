#include <iostream>
using namespace std;

int dist(int from, int to, int N) {
    int d = (to - from + N) % N;
    return d;
}

int main() {
    int N, Q;
    cin >> N >> Q;

    int L = 1, R = 2;
    int ans = 0;

    while (Q--) {
        char H;
        int T;
        cin >> H >> T;

        if (H == 'L') {
            int d1 = dist(L, T, N);
            int d2 = N - d1;

            // Rをまたぐかチェック
            int cur = L;
            bool ok1 = true;
            for (int i = 0; i < d1; i++) {
                cur = cur % N + 1;
                if (cur == R) ok1 = false;
            }

            int best = 1e9;
            if (ok1) best = min(best, d1);
            else best = d2;

            ans += best;
            L = T;
        } else {
            int d1 = dist(R, T, N);
            int d2 = N - d1;

            int cur = R;
            bool ok1 = true;
            for (int i = 0; i < d1; i++) {
                cur = cur % N + 1;
                if (cur == L) ok1 = false;
            }

            int best = 1e9;
            if (ok1) best = min(best, d1);
            else best = d2;

            ans += best;
            R = T;
        }
    }

    cout << ans << endl;
}
