#include <iostream>
#include <string>
using namespace std;

int main() {
    int x;
    cin >> x;
    string s = "HelloWorld";

    for (int i = 0; i < s.size(); i++) {
        if (i == x - 1)
            continue; //でなければ戻すコマンド。
        cout << s[i];
    }

    cout << '\n';
}
