#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N+1, 0);
    for (int i = 0; i < N; i++) {
        cin >> A[i + 1];
    }

    int X;
    cin >> X;
    cout << A[X] << endl;

    return 0;
}
