#include <iostream>
using namespace std;

int main() {
    long long B;
    cin >> B;

    for (long long A = 1; A <= 15; A++) {
        long long x = 1;

        for (int i = 0; i < A; i++) {
            if (x > B / A) { // オーバーフロー防止
                x = B + 1;
                break;
            }
            x *= A;
        }

        if (x == B) {
            cout << A << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
