#include <iostream>
#include <vector>
#include <string>
using namespace std;

int N, M;
vector<string> S;

bool check(int x, int y) {

    // 左上 3x3 が #
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (S[x + i][y + j] != '#') {
                return false;
            }
        }
    }

    // 左上周囲が .
    for (int i = 0; i < 4; i++) {
        if (S[x + 3][y + i] != '.') {
            return false;
        }
        if (S[x + i][y + 3] != '.') {
            return false;
        }
    }

    // 右下 3x3 が #
    for (int i = 6; i < 9; i++) {
        for (int j = 6; j < 9; j++) {
            if (S[x + i][y + j] != '#') {
                return false;
            }
        }
    }

    // 右下周囲が .
    for (int i = 5; i < 9; i++) {
        if (S[x + 5][y + i] != '.') {
            return false;
        }
        if (S[x + i][y + 5] != '.') {
            return false;
        }
    }

    return true;
}

int main() {
    cin >> N >> M;

    S.resize(N);

    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }

    for (int i = 0; i <= N - 9; i++) {
        for (int j = 0; j <= M - 9; j++) {

            if (check(i, j)) {
                cout << i + 1 << ' ' << j + 1 << '\n';
            }
        }
    }
}
