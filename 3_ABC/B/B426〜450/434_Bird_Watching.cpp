#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    double sum[105] = {0};
    int cnt[105] = {0};

    for (int i = 0; i < N; i++) {
        int A, B;
        cin >> A >> B;
        sum[A] += B;
        cnt[A]++;
    }

    for (int k = 1; k <= M; k++) {
        double avg = sum[k] / cnt[k];
        cout << fixed << setprecision(10) << avg << endl;
    }
}
