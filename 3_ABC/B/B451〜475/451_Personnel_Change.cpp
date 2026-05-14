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
    int N, M;
    cin >> N >> M;

    vector<int> diff(M + 1, 0);
    // 差分を数える。
    // 1-indexにしたいので M+1 個だけ用意する。

    for (int i = 0; i < N; i++) {
        int A, B;
        cin >> A >> B;
        diff[A]--; // 所属元から1を引く。
        diff[B]++; // 転属先に1を足す。
    }

    for (int j = 1; j <= M; j++) {
        cout << diff[j] << endl;
    }

    return 0;
}
