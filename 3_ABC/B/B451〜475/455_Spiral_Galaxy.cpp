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

    int ans = 0;
    for (int h1 = 0; h1 < H; h1++) {
        for (int h2 = h1; h2 < H; h2++) {
            for (int w1 = 0; w1 < W; w1++) {
                for (int w2 = w1; w2 < W; w2++) {

                    bool ok = true;

                    for (int i = h1; i <= h2 && ok; i++) {
                        for (int j = w1; j <= w2; j++) {
                            int ni = h1 + h2 - i;
                            int nj = w1 + w2 - j;

                            if (S[i][j] != S[ni][nj]) {
                                ok = false;
                                break;
                            }
                        }
                    }

                    if (ok) ans++;
                }
            }
        }
    }

    cout << ans << endl;
}
