#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int H, W, N;
    cin >> H >> W >> N;

    vector<vector<int>> grid(H, vector<int>(W, 0)); // 0=白,1=黒

    int r = 0, c = 0;
    int dir = 0; // 上

    int dr[4] = {-1, 0, 1, 0};
    int dc[4] = {0, 1, 0, -1};

    for (int step = 0; step < N; step++) {
        if (grid[r][c] == 0) {
            // 白
            grid[r][c] = 1;
            dir = (dir + 1) % 4; // 右回転
        } else {
            // 黒
            grid[r][c] = 0;
            dir = (dir + 3) % 4; // 左回転
        }

        // 移動（トーラス）
        r = (r + dr[dir] + H) % H;
        c = (c + dc[dir] + W) % W;
    }

    // 出力
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (grid[i][j]) cout << '#';
            else cout << '.';
        }
        cout << '\n';
    }

    return 0;
}
