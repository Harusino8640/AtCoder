#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int H, W, D;
    cin >> H >> W >> D;

    vector<string> S(H);
    for (int i = 0; i < H; i++) cin >> S[i];

    vector<pair<int,int>> floors;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (S[i][j] == '.') {
                floors.push_back({i, j});
            }
        }
    }

    int ans = 0;
    int K = floors.size();

    for (int i = 0; i < K; i++) {
        for (int j = i + 1; j < K; j++) {

            auto [x1, y1] = floors[i];
            auto [x2, y2] = floors[j];

            int cnt = 0;

            for (auto [x, y] : floors) {
                int d1 = abs(x - x1) + abs(y - y1);
                int d2 = abs(x - x2) + abs(y - y2);

                if (d1 <= D || d2 <= D) {
                    cnt++;
                }
            }

            if (cnt > ans) ans = cnt;
        }
    }

    cout << ans << endl;
    return 0;
}
