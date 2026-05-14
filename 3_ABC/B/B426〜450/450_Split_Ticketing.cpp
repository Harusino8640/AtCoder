#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<long long>> C(N + 1, vector<long long>(N + 1));
    // 縦横に N+1 の2次元配列を作る。例えば N=3 なら以下。
    //      j=0     j=1     j=2     j=3
    // i=0  C[0][0] C[0][1] C[0][2] C[0][3]
    // i=1  C[1][0] C[1][1] C[1][2] C[1][3]
    // i=2  C[2][0] C[2][1] C[2][2] C[2][3]
    // i=3  C[3][0] C[3][1] C[3][2] C[3][3]
    // 今回は 1-index で使うため i=0, j=0 の部分は使わない。
    // また実際に使うのは i < j の部分のみ。

    for (int i = 1; i <= N; i++) {
        for (int j = i + 1; j <= N; j++) { // C[1][2]から入れていく
            cin >> C[i][j];
        }
    }
    // 例えば以下の入力に対して、
    //  3
    //  45 450
    //  50
    // 以下のように格納する。
    //    0   1    2    3
    // 0  -   -    -    -
    // 1  -   -   45  450
    // 2  -   -    -   50
    // 3  -   -    -    -

    for (int a = 1; a <= N; a++) {
        for (int b = a + 1; b <= N; b++) {
            for (int c = b + 1; c <= N; c++) {
                if (C[a][b] + C[b][c] < C[a][c]) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    // 例えば上述の入力の場合、以下のようになり、
    //  45 + 50 < 450
    // 1駅から3駅まで乗る450円より、一旦2駅で降りて乗り直す95円の方が安いことになる。

    cout << "No" << endl;
    return 0;
}
