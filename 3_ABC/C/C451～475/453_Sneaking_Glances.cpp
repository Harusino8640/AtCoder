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

bool crossed_zero(double prev, double current) {
    return (prev > 0 && current < 0) || (prev < 0 && current > 0);
}
int N;
vector<long long> L;
int max_cross_count = 0;
void dfs(int step, double position, int cross_count) {
    if (step == N) {
        max_cross_count = max(max_cross_count, cross_count);
        return;
    }
    {
        double next_position = position + L[step];
        int add = crossed_zero(position, next_position) ? 1 : 0;
        dfs(step + 1, next_position, cross_count + add);
    }
    {
        double next_position = position - L[step];
        int add = crossed_zero(position, next_position) ? 1 : 0;
        dfs(step + 1, next_position, cross_count + add);
    }
}

int main() {
    cin >> N;
    L.resize(N);
    for (int i = 0; i < N; i++) {
        cin >> L[i];
    }
    dfs(0, 0.5, 0);
    cout << max_cross_count << endl;
}
