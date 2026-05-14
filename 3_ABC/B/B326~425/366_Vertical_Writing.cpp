#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> S(N);
    int M = 0;

    for (int i = 0; i < N; i++) {
        cin >> S[i];
        if ((int)S[i].size() > M) M = S[i].size();
    }

    // M行 N列
    vector<string> T(M, string(N, '*'));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < (int)S[i].size(); j++) {
            T[j][N - i - 1] = S[i][j];
        }
    }

    // 右端の '*' を削る
    for (int i = 0; i < M; i++) {
        int last = N - 1;
        while (last >= 0 && T[i][last] == '*') last--;
        for (int j = 0; j <= last; j++) {
            cout << T[i][j];
        }
        cout << "\n";
    }

    return 0;
}
