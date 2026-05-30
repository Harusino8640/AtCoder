#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    vector<string> S(H);
    for (int i = 0; i < H; i++) {
        cin >> S[i];
    }

    const int INF = 1e9;

    vector<vector<int>> dist(H, vector<int>(W, INF));
    queue<pair<int, int>> q;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (S[i][j] == '#') {
                dist[i][j] = 0;
                q.push({i, j});
            }
        }
    }

    int dx[8] = {-1,-1,-1,0,0,1,1,1};
    int dy[8] = {-1,0,1,-1,1,-1,0,1};

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        for (int k = 0; k < 8; k++) {
            int nx = x + dx[k];
            int ny = y + dy[k];

            if (nx < 0 || nx >= H || ny < 0 || ny >= W) {
                continue;
            }

            if (dist[nx][ny] != INF) {
                continue;
            }

            dist[nx][ny] = dist[x][y] + 1;
            q.push({nx, ny});
        }
    }

    vector<string> ans(H, string(W, '.'));

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (dist[i][j] != INF && dist[i][j] % 2 == 0) {
                ans[i][j] = '#';
            }
        }
    }

    for (int i = 0; i < H; i++) {
        cout << ans[i] << '\n';
    }
}
