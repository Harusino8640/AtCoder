#include <iostream>
#include <string>
using namespace std;
using ll = long long;
const ll MOD = 998244353;

int main() {
    string S;
    cin >> S;
    ll answer = 1;
    ll current = 1;
    /*
    1文字目が有効部分文字列であることは確定しているので、初期値1から数え上げればよい。
    以下のfor文で「i = 1」として、2文字目から調べる。
    */

    for (int i = 1; i < S.size(); i++) {
        if (S[i] != S[i - 1]) {
            current++;
        }
        else {
            current = 1;
        }
        answer += current;
    /*
    部分文字列の右端から遡るのがよい。
    i文字目とi-1文字目が異なればcurrentを1増やし、その状態のままi+1文字目に持ち越すのがポイントである。
    たとえばabccfにおいて、
        i=1の時、currentは2（ab, b）なのでanswerは3
        i=2の時、currentは3（abc, bc, c）なのでanswerは6
        i=3の時、currentは1（c）なのでanswerは7
        i=4の時、currentは2（cf, f）なのでanswerは9
    となる。
    */
        answer %= MOD; //これはfor文の外でも通るのだが、ループの中でmodを取る方が一般的である。
    }

    cout << answer << '\n';
}
