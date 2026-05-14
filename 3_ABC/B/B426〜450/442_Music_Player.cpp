#include <iostream>
using namespace std;

int main() {
    int Q;
    cin >> Q;

    int volume = 0;
    bool playing = false;

    for (int i = 0; i < Q; i++) {
        int A;
        cin >> A;

        if (A == 1) {
            volume++;
        } else if (A == 2) {
            if (volume > 0) volume--;
        } else if (A == 3) {
            playing = !playing;
        }

        if (volume >= 3 && playing) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
