#include <iostream>
using namespace std;
using ll = long long;

int main() {
    int T;
    cin >> T;

    while (T--) {
        ll X1, Y1, R1, X2, Y2, R2;
        cin >> X1 >> Y1 >> R1 >> X2 >> Y2 >> R2;

        ll dx = X1 - X2;
        ll dy = Y1 - Y2;
        ll d2 = dx * dx + dy * dy;

        ll mn = R1 - R2;
        if (mn < 0) mn = -mn;

        ll mn2 = mn * mn;
        ll mx2 = (R1 + R2) * (R1 + R2);

        if (mn2 <= d2 && d2 <= mx2) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
}
