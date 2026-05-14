#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> cnt(M + 1, 0);

    for (int i = 0; i < N; i++) {
        int f;
        cin >> f;
        cnt[f]++;
    }

    bool ok1 = true;
    for (int i = 1; i <= M; i++) {
        if (cnt[i] >= 2) {
            ok1 = false;
            break;
        }
    }

    bool ok2 = true;
    for (int i = 1; i <= M; i++) {
        if (cnt[i] == 0) {
            ok2 = false;
            break;
        }
    }

    cout << (ok1 ? "Yes" : "No") << "\n";
    cout << (ok2 ? "Yes" : "No") << "\n";
}
