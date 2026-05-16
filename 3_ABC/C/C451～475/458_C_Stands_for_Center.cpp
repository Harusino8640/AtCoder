#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    int N = S.size();
    long long ans = 0;

    for (int i = 0; i < N; i++) {
        if (S[i] == 'C') {
            ans += min(i, N - i - 1) + 1;
        }
    }

    cout << ans << endl;

    return 0;
}
