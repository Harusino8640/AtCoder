#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e, f;
    int g, h, i, j, k, l;

    cin >> a >> b >> c >> d >> e >> f;
    cin >> g >> h >> i >> j >> k >> l;

    bool x = max(a, g) < min(d, j);
    bool y = max(b, h) < min(e, k);
    bool z = max(c, i) < min(f, l);

    if (x && y && z) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}
