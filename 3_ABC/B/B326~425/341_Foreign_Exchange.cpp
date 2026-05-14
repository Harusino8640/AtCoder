#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    vector<long long> S(N), T(N);
    for (int i = 0; i < N - 1; i++) {
        cin >> S[i] >> T[i];
    }

    for (int i = 0; i < N - 1; i++) {
        long long k = A[i] / S[i];
        A[i] -= k * S[i];
        A[i + 1] += k * T[i];
    }

    cout << A[N - 1] << endl;
    return 0;
}
