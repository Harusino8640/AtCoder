#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> rotate90(const vector<string>& S) {
    int N = S.size();
    vector<string> res(N, string(N, '.'));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            res[i][j] = S[N - 1 - j][i];
        }
    }
    return res;
}

int main() {
    int N;
    cin >> N;

    vector<string> S(N), T(N);
    for (int i = 0; i < N; i++) cin >> S[i];
    for (int i = 0; i < N; i++) cin >> T[i];

    int ans = 1e9;

    vector<string> cur = S;

    for (int rot = 0; rot < 4; rot++) {
        int diff = 0;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (cur[i][j] != T[i][j]) diff++;
            }
        }

        int cost = rot + diff;
        if (cost < ans) ans = cost;

        // 次の回転へ
        cur = rotate90(cur);
    }

    cout << ans << endl;
    return 0;
}
