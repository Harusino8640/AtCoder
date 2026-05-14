#include <iostream>
using namespace std;

int main() {
    long long N, K;
    cin >> N >> K;

    long long sum = 0;

    for (long long x = 0;; x++) {
        sum += N + x;
        if (sum >= K) {
            cout << x << endl;
            break;
        }
    }

    return 0;
}
