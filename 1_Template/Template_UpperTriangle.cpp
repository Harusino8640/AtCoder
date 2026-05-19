#include <iostream>
using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<vector<ll>> C(N + 1, vector<ll>(N + 1));

    for (int i = 1; i <= N; i++) {
        for (int j = i + 1; j <= N; j++) {
            cin >> C[i][j];
        }
    }

    /*
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cout << C[i][j] << " ";
        }
        cout << '\n';
    }
    */

    return 0;
}


