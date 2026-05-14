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

    vector<long long> C(M);
    for (int i = 0; i < M; i++) {
        cin >> C[i];
    }
    // M種類ある胡椒の内容量を入力していく。今回は0-indexとする。

    vector<long long> sum(M, 0);
    for (int i = 0; i < N; i++) {
        int A;
        long long B;
        cin >> A >> B;
        A--;            // 0-indexのため1だけズラす。
        sum[A] += B;    // A番目の胡椒はBグラム追加で使えることになる。
    }
    // どの料理に何グラム掛けるかは関係なく、結局その胡椒が全料理に使える限度量だけ分かれば良い。

    long long ans = 0;
    for (int j = 0; j < M; j++) {
        ans += min(C[j], sum[j]);
    }
    cout << ans << endl;
    // min（胡椒の内容量、胡椒が使える限度量）の合計を出力する。
}
