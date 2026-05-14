#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, S, M, L;
    cin >> N >> S >> M >> L;

    int ans = 1e9;

    for (int i = 0; i <= 20; i++) {
        for (int j = 0; j <= 20; j++) {
            for (int k = 0; k <= 20; k++) {
                int eggs = 6*i + 8*j + 12*k;
                if (eggs >= N) {
                    int cost = S*i + M*j + L*k;
                    ans = min(ans, cost);
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}
