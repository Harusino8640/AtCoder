#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int H, W, N;
    cin >> H >> W >> N;

    vector<vector<int>> A(H, vector<int>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> A[i][j];
        }
    }

    set<int> st;
    for (int i = 0; i < N; i++) {
        int b;
        cin >> b;
        st.insert(b);
    }

    int ans = 0;
    for (int i = 0; i < H; i++) {
        int cnt = 0;
        for (int j = 0; j < W; j++) {
            if (st.count(A[i][j])) {
                cnt++;
            }
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;
}
