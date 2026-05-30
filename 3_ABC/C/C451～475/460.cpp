#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
    int N, M;
    cin >> N >> M;

    vector<ll> A(N), B(M);
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < M; i++) cin >> B[i];
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    int i = 0;
    int j = 0;
    int ans = 0;
    while (i < N && j < M) {
        if (A[i] * 2 >= B[j]) {
            ans++;
            i++;
            j++;
        } else {
            i++;
        }
    }

    cout << ans << '\n';
}
