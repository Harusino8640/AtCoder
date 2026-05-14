#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    int ans = 0;

    for (int x = 0; x <= N; x++) {
        int cnt = 0;
        for (int i = 0; i < N; i++) {
            if (A[i] >= x) cnt++;
        }
        if (cnt >= x) ans = x;
    }

    cout << ans << endl;
    return 0;
}
