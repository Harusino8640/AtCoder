#include <iostream>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    for (int i = 0; i < W; i++) {
        cout << "#";
    }
    cout << '\n';

    for (int i = 0; i < H - 2; i++) {
        cout << "#"; 
        for (int j = 0; j < W - 2; j++) {
            cout << ".";
        }
        cout << "#" << '\n';
    }

    for (int i = 0; i < W; i++) {
        cout << "#";
    }
    cout << '\n';

}
