#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> A(N+1);
    for (int i = 0; i < N; i++) {
        int L;
        cin >> L;
        A[i+1].resize(L+1);

        for (int j = 0; j < L; j++) {
            cin >> A[i+1][j+1];
        }
    }

    int X, Y;
    cin >> X >> Y;
    cout << A[X][Y] << endl;

    return 0;
}
