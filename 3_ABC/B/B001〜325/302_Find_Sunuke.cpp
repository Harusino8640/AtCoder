#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    vector<string> S(H);

    for (int i = 0; i < H; i++) {
        cin >> S[i];
    }

    string target = "snuke";

    vector<int> dx = {-1,-1,-1,0,0,1,1,1};
    vector<int> dy = {-1,0,1,-1,1,-1,0,1};

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {

            for (int dir = 0; dir < 8; dir++) {

                bool ok = true;

                vector<pair<int,int>> ans;

                for (int k = 0; k < 5; k++) {

                    int ni = i + dx[dir] * k;
                    int nj = j + dy[dir] * k;

                    // 範囲外
                    if (ni < 0 || ni >= H || nj < 0 || nj >= W) {
                        ok = false;
                        break;
                    }

                    // 文字違い
                    if (S[ni][nj] != target[k]) {
                        ok = false;
                        break;
                    }

                    ans.push_back({ni + 1, nj + 1});
                }

                if (ok) {
                    for (auto [r, c] : ans) {
                        cout << r << ' ' << c << '\n';
                    }
                    return 0;
                }
            }
        }
    }
}
