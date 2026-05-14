#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<bool> lost(N + 1, false);

    for (int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;

        // B は A より弱い
        lost[B] = true;
    }

    vector<int> candidates;

    for (int i = 1; i <= N; i++) {
        if (!lost[i]) {
            candidates.push_back(i);
        }
    }

    if (candidates.size() == 1) {
        cout << candidates[0] << '\n';
    }
    else {
        cout << -1 << '\n';
    }
}
