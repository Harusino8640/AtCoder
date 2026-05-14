#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<long long> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    long long limit = 1;
    for (int i = 0; i < K; i++) limit *= 10; // 10^K

    long long cur = 1;

    for (int i = 0; i < N; i++) {
        if (cur > (limit - 1) / A[i]) {
            cur = 1;
        } else {
            cur *= A[i];
        }
    }

    cout << cur << endl;
    return 0;
}
