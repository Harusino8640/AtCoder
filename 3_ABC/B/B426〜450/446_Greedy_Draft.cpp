#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> a(N);
    for (int i = 0; i < N; i++) {
        int L;
        cin >> L;
        a[i].resize(L);
        for (int j = 0; j < L; j++) {
            cin >> a[i][j];
        }
    }

    vector<bool> used(M + 1, false);
    for (int i = 0; i < N; i++) {
        int ans = 0;
        for (int x : a[i]) {
            if (!used[x]) {
                ans = x;
                used[x] = true;
                break;
            }
        }
        cout << ans << endl;
    }
}
