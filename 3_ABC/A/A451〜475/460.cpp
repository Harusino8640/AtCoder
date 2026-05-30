#include <iostream>
using namespace std;

int main() {
    int N, M, cnt, X;
    cin >> N >> M;
    cnt = 0;

    while (M != 0) {
        X = N % M;
        M = X;
        cnt++;
    }

    cout << cnt << '\n';
}
