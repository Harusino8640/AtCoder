#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    for (int i = 0; i + 2 < N; i++) {
        if (A[i + 1] * A[i + 1] != A[i] * A[i + 2]) {
            cout << "No\n";
            return 0;
        }
    }

    cout << "Yes\n";
    return 0;
}
