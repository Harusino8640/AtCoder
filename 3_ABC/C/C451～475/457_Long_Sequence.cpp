#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long N, K;
    cin >> N >> K;
    vector<vector<long long>> A(N + 1);
    vector<long long> L(N + 1);
    vector<long long> C(N + 1);

    for (int i = 1; i <= N; i++) {
        cin >> L[i];
        A[i].resize(L[i]+1);

        for (int j = 1; j <= L[i]; j++) {
            cin >> A[i][j];
        }
    }

    for (int i = 1; i <= N; i++) {
        cin >> C[i];
    }

    for (int i = 1; i <= N; i++) {
        long long block_size = L[i] * C[i];//i回目に追加された整数列の長さ(これを1ブロックとする)を出す。

        if (K > block_size) {//ブロック長がK未満の時、そのブロック内に出力したいKは存在しない。
            K -= block_size;//ので、Kをブロック長だけ削る。
        } else {//では、該当ブロック内の何番目かという話になる訳だが、
            long long index = K % L[i];//Lの倍数でループしているので、modを取る感覚で。
                if (index == 0) {
                index = L[i];
            }
            cout << A[i][index] << endl;
            return 0;
        }
    }
}
