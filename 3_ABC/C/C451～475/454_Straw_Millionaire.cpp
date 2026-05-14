#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    // グラフ（A -> B）
    vector<vector<int>> g(N + 1);
    for (int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;
        g[A].push_back(B);
    }

    // BFS
    vector<bool> visited(N + 1, false);
    queue<int> q;

    q.push(1);
    visited[1] = true;

    while (!q.empty()) {
        int v = q.front();
        q.pop();

        for (int nv : g[v]) {
            if (!visited[nv]) {
                visited[nv] = true;
                q.push(nv);
            }
        }
    }

    // 数える
    int ans = 0;
    for (int i = 1; i <= N; i++) {
        if (visited[i]) ans++;
    }

    cout << ans << endl;
}
