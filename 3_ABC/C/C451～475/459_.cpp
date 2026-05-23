#include <iostream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> height(n, 0);

    for (int i = 0; i < q; i++) {
        int type, m;
        cin >> type >> m;
        int base = 0;
        int zero = n;

        if (type == 1) {
            m--;
            if (height[m] == base) {
                zero--;
            }
            height[m]++;
            if (zero == 0) {
                base++;
                zero = 0;
                for (int j = 0; j < n; j++) {
                    if (height[j] == base) {
                        zero++;
                    }
                }
            }
        }

        if (type == 2) {
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                if (height.at(j) >= m) {
                    cnt++;
                }
            }
            cout << cnt << '\n';
        }

    }

    cout << '\n';
}
