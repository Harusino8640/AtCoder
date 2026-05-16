#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    int N;

    cin >> S >> N;

    cout << S.substr(N, S.size() - 2 * N) << endl;

    return 0;
}
