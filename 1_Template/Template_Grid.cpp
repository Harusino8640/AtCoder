#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <cmath>
using namespace std;
using ll = long long;
const ll MOD = 998244353;

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> grid(H + 1);
    for (int i = 1; i <= H; i++) {
        cin >> grid[i];
    }

    int dy[4] = {-1, 1, 0, 0};
    int dx[4] = {0, 0, -1, 1};

    for (int i = 1; i <= H; i++) {
        for (int j = 0; j < W; j++) {
            for (int dir = 0; dir < 4; dir++) {
                int ny = i + dy[dir];
                int nx = j + dx[dir];
                if (ny < 1 || ny > H || nx < 0 || nx >= W) {
                    continue;
                }
            }
        }
    }

    return 0;
}


