#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<bool> has(N + 1, false);

    for (int i = 0; i < M; i++) {
        int x;
        cin >> x;

        has[x] = true;
    }

    int i = 1;

    while (i <= N) {

        int r = i;

        // レ点が続く限り伸ばす
        while (r < N && has[r]) {
            r++;
        }

        // 逆順出力
        for (int x = r; x >= i; x--) {
            cout << x << ' ';
        }

        i = r + 1;
    }

    cout << '\n';
}
