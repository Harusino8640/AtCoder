#include <iostream>
#include <vector>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    vector<int> dx = {-1, 1, 0, 0};
    vector<int> dy = {0, 0, -1, 1};

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {

            int cnt = 0;

            for (int k = 0; k < 4; k++) {
                int ni = i + dx[k];
                int nj = j + dy[k];

                if (0 <= ni && ni < H && 0 <= nj && nj < W) {
                    cnt++;
                }
            }

            cout << cnt;

            if (j != W - 1) {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
