#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> W(N), X(N);
    for (int i = 0; i < N; i++) {
        cin >> W[i] >> X[i];
    }

    int ans = 0;

    for (int t = 0; t < 24; t++) {
        int sum = 0;

        for (int i = 0; i < N; i++) {
            int local = (t + X[i]) % 24;

            if (9 <= local && local <= 17) {
                sum += W[i];
            }
        }

        ans = max(ans, sum);
    }

    cout << ans << endl;
    return 0;
}
