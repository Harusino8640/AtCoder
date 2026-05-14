#include <iostream>
using namespace std;

long long floor_div(long long a, long long b) {
    if (a >= 0) return a / b;
    return - ((-a + b - 1) / b);
}

long long ceil_div(long long a, long long b) {
    if (a >= 0) return (a + b - 1) / b;
    return - ((-a) / b);
}

int main() {
    long long A, M, L, R;
    cin >> A >> M >> L >> R;

    long long kmin = ceil_div(L - A, M);
    long long kmax = floor_div(R - A, M);

    long long ans = kmax - kmin + 1;
    if (ans < 0) ans = 0;

    cout << ans << endl;
    return 0;
}
