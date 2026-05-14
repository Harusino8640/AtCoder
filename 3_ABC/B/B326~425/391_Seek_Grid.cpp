#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<string> S(N), T(M);
    for (int i = 0; i < N; i++) cin >> S[i];
    for (int i = 0; i < M; i++) cin >> T[i];

    for (int a = 0; a <= N - M; a++) {
        for (int b = 0; b <= N - M; b++) {

            bool ok = true;

            for (int i = 0; i < M && ok; i++) {
                for (int j = 0; j < M; j++) {
                    if (S[a + i][b + j] != T[i][j]) {
                        ok = false;
                        break;
                    }
                }
            }

            if (ok) {
                // 1-indexに直す
                cout << a + 1 << " " << b + 1 << endl;
                return 0;
            }
        }
    }

    return 0;
}
