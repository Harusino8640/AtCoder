#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
using ll = long long;

int main() {
    int H, W, K;
    cin >> H >> W >> K;

    vector<string> S(H);

    for (int i = 0; i < H; i++) {
        cin >> S[i];
    }

    ll ans = 0;

    vector<int> col(W);

    // 上端固定
    for (int top = 0; top < H; top++) {

        fill(col.begin(), col.end(), 0);

        // 下端を伸ばす
        for (int bottom = top; bottom < H; bottom++) {

            for (int j = 0; j < W; j++) {
                col[j] += S[bottom][j] - '0';
            }

            unordered_map<int, int> mp;
            mp[0] = 1;

            int sum = 0;

            for (int j = 0; j < W; j++) {
                sum += col[j];

                if (mp.count(sum - K)) {
                    ans += mp[sum - K];
                }

                mp[sum]++;
            }
        }
    }

    cout << ans << endl;
}
