#include <iostream>
#include <vector>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<int> di = {-1, 1, 0, 0};
    vector<int> dj = {0, 0, -1, 1};
    /*
    上下左右への移動を表現する。行の変化をdi、列の変化をdjと名付けることにして、後述のように、
        ni = i + di[k]
        nj = j + dj[k]
    とすることで、k = 0〜3 で上下左右を参照することができる。
    */

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {

            int cnt = 0;
            for (int k = 0; k < 4; k++) {
                int ni = i + di[k];
                int nj = j + dj[k];

                if (0 <= ni && ni < H && 0 <= nj && nj < W) {
                    cnt++;
                }
                /*
                i行目j列目のマスに対して、それに隣接するni行目nj列目のマスが、
                0 <= ni < H であり、かつ 0 <= nj < W であるとき、
                （つまり「隣接するマスが今回のグリッド内に存在する」とき）
                cntを1増やす。この処理が上下左右で4マス分。
                */
            }
            cout << cnt;

            if (j != W - 1) {
                cout << " ";
            }
            /*
            逆に言うと、j = W-1 すなわち右端に到達した時はスペースを打たせない。
            このスペース１つで挙動がおかしくなったり、競プロの場合WAになったりする。
            */
        }
        cout << endl;
        /*
        i行目を全て出力したら、改行してi+1行目へ。
        */
    }
}
