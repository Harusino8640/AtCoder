#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string S;
    cin >> S;
    int N = S.size();
    double ans = 0.0;

    int pref[105] = {};

    for (int i = 0; i < N; i++) {
        pref[i + 1] = pref[i] + (S[i] == 't');
    }

    for (int l = 0; l < N; l++) {

        if (S[l] != 't') continue;

        for (int r = l + 2; r < N; r++) {

            if (S[r] != 't') continue;

            int len = r - l + 1;

            int cnt = pref[r + 1] - pref[l];

            double rate = (double)(cnt - 2) / (len - 2);

            ans = max(ans, rate);
        }
    }

    cout << fixed << setprecision(17) << ans << '\n';
}
