#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> C(N);
    vector<vector<int>> A(N);

    for (int i = 0; i < N; i++) {
        cin >> C[i];

        A[i].resize(C[i]);

        for (int j = 0; j < C[i]; j++) {
            cin >> A[i][j];
        }
    }

    int X;
    cin >> X;

    int minC = 1000000;
    vector<int> ans;

    for (int i = 0; i < N; i++) {

        bool hasX = false;

        for (int x : A[i]) {
            if (x == X) {
                hasX = true;
            }
        }

        if (!hasX) continue;

        if (C[i] < minC) {
            minC = C[i];
            ans.clear();
            ans.push_back(i + 1);
        }
        else if (C[i] == minC) {
            ans.push_back(i + 1);
        }
    }

    cout << ans.size() << '\n';

    for (int x : ans) {
        cout << x << ' ';
    }

    cout << '\n';
}
