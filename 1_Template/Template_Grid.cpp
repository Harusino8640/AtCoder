#include <iostream>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> grid(H + 1);
    for (int i = 1; i <= H; i++) {
        cin >> grid[i];
    }

    int di[4] = {-1, 1, 0, 0};
    int dj[4] = {0, 0, -1, 1};

    for (int i = 1; i <= H; i++) {
        for (int j = 0; j < W; j++) {
            for (int dir = 0; dir < 4; dir++) {
                int ny = i + di[dir];
                int nx = j + dj[dir];
                if (ny < 1 || ny > H || nx < 0 || nx >= W) {
                    continue;
                }
            }
        }
    }

}


