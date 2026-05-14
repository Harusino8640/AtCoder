#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;

    vector<int> A(N - 1);

    for (int i = 0; i < N - 1; i++) {
        cin >> A[i];
    }

    for (int score = 0; score <= 100; score++) {

        vector<int> B = A;
        B.push_back(score);

        sort(B.begin(), B.end());

        int sum = 0;

        for (int i = 1; i <= N - 2; i++) {
            sum += B[i];
        }

        if (sum >= X) {
            cout << score << '\n';
            return 0;
        }
    }

    cout << -1 << '\n';
}
