#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> P(N);
    vector<vector<bool>> has(N, vector<bool>(M + 1, false));
    vector<int> C(N);

    for (int i = 0; i < N; i++) {
        cin >> P[i] >> C[i];

        for (int j = 0; j < C[i]; j++) {
            int x;
            cin >> x;
            has[i][x] = true;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

            if (i == j) continue;

            // 条件1
            if (P[i] < P[j]) continue;

            // 条件2:
            // i の機能を j が全部持つか
            bool ok = true;

            for (int k = 1; k <= M; k++) {
                if (has[i][k] && !has[j][k]) {
                    ok = false;
                }
            }

            if (!ok) continue;

            // 条件3
            bool better = false;

            // j の方が安い
            if (P[i] > P[j]) {
                better = true;
            }

            // j に追加機能がある
            for (int k = 1; k <= M; k++) {
                if (!has[i][k] && has[j][k]) {
                    better = true;
                }
            }

            if (better) {
                cout << "Yes\n";
                return 0;
            }
        }
    }

    cout << "No\n";
}
