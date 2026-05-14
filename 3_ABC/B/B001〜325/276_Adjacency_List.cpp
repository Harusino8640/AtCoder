#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> G(N + 1);

    for (int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;

        G[A].push_back(B);
        G[B].push_back(A);
    }

    for (int i = 1; i <= N; i++) {

        sort(G[i].begin(), G[i].end());

        cout << G[i].size();

        for (int v : G[i]) {
            cout << ' ' << v;
        }

        cout << '\n';
    }
}
