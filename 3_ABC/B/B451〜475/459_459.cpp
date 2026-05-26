#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        char c = s[0];

        if (c >= 'a' && c <= 'c') {
            cout << 2;
        }
        else if (c >= 'd' && c <= 'f') {
            cout << 3;
        }
        else if (c >= 'g' && c <= 'i') {
            cout << 4;
        }
        else if (c >= 'j' && c <= 'l') {
            cout << 5;
        }
        else if (c >= 'm' && c <= 'o') {
            cout << 6;
        }
        else if (c >= 'p' && c <= 's') {
            cout << 7;
        }
        else if (c >= 't' && c <= 'v') {
            cout << 8;
        }
        else {
            cout << 9;
        }
    }

    cout << '\n';
}
