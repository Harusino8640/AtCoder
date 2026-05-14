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
    int H, W, Q;
    cin >> H >> W >> Q;
    int h = H, w = W; // 処理の度に減っていくので、縦横は別で用意しておく。

    for (int i = 0; i < Q; i++) {
        int type;
        cin >> type;

        if (type == 1) {
            int R;
            cin >> R;                     // タイプ1なので、下R行だけ削る。
            cout << R * w;                // 削った個数は、R行 * w列。
            h -= R;                       // Rの分だけhを削る。
            cout << " " << h * w << endl; // 残りを数えて次へ。

        } else {
            int C;
            cin >> C;                     // タイプ2なので、右C列だけ削る
            cout << C * h;                // 削った個数は、h行 * C列。
            w -= C;                       // Cの分だけwを削る。
            cout << " " << h * w << endl; // 残りを数えて次へ。
        }
    }
}
