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
    int N;
    cin >> N;

    vector<vector<int>> a(N, vector<int>(N, 0));

    int r = 0;
    int c = (N - 1) / 2;
    a[r][c] = 1;

    for (int k = 2; k <= N * N; k++) {
        int nr = (r - 1 + N) % N;
        int nc = (c + 1) % N;

        if (a[nr][nc] == 0) {
            r = nr;
            c = nc;
        } else {
            r = (r + 1) % N;
        }

        a[r][c] = k;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
