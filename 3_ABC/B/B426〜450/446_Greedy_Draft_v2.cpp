#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> preferences(N + 1);
    for (int i = 1; i <= N; i++) {
        int L;
        cin >> L;
        preferences[i].resize(L + 1);
        for (int j = 1; j <= L; j++) {
            cin >> preferences[i][j];
        }
    }

    vector<bool> used(M + 1, false);

    for (int i = 1; i <= N; i++) {
        int answer = 0;
        int L = preferences[i].size() - 1;
        for (int j = 1; j <= L; j++) {
            int juice = preferences[i][j];
            if (!used[juice]) {
                answer = juice;
                used[juice] = true;
                break;
            }
        }
        cout << answer << '\n';
    }
}
