#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int R, C;
    cin >> R >> C;

    vector<string> B(R);

    for (int i = 0; i < R; i++) {
        cin >> B[i];
    }

    vector<string> ans = B;

    for (int r = 0; r < R; r++) {
        for (int c = 0; c < C; c++) {

            bool destroyed = false;

            // 全爆弾を調べる
            for (int i = 0; i < R; i++) {
                for (int j = 0; j < C; j++) {

                    if ('1' <= B[i][j] && B[i][j] <= '9') {

                        int power = B[i][j] - '0';

                        int dist = abs(r - i) + abs(c - j);

                        if (dist <= power) {
                            destroyed = true;
                        }
                    }
                }
            }

            if (destroyed) {
                ans[r][c] = '.';
            }
        }
    }

    for (int i = 0; i < R; i++) {
        cout << ans[i] << '\n';
    }
}
