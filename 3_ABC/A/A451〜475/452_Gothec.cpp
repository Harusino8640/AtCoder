#include <iostream>
#include <set>
using namespace std;

int main() {
    int M, D;
    cin >> M >> D;

    set<pair<int, int>> sekku = {
        {1, 7},
        {3, 3},
        {5, 5},
        {7, 7},
        {9, 9}
    };

    if (sekku.count({M, D})) {
        cout << "Yes" << endl;
    } else {
        cout << "No\n";
    }
    // {M,D}がsekkuの中にあれば1を、なければ0を返す。
    // \nはendlとほぼ同義だが、ゆくゆくは使い分けよう。

    if (sekku.find({M, D}) != sekku.end()){
        cout << "Yes\n";
    } else {
        cout << "No" << endl;
    }
    // このように実装してもよい。
    // {M,D}がsekkuの中にあればその位置を、なければend()を返す。
}
