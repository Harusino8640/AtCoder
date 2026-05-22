#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <queue>
#include <algorithm>
#include <map>
#include <cmath>
#include <iomanip>
#include <atcoder/modint>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using mint = atcoder::modint998244353;
const int INF = 1e9;
const ll LINF = 4e18;
const ll MOD = 998244353;
#define all(x) (x).begin(), (x).end()

int main() {

}

/*
    mint について、まずmod計算における逆元について説明する。
    たとえば 3 * 332748118 ≡ 1 (mod 998244353) だが、
    このように、nにxを掛けた結果がmを法として1と合同になるとき、
    すなわち n * x ≡ 1 (mod m) であるとき、
    「nは法mに対して可逆であり、xは法mに関するnの逆元である」という。
    この逆元を算出する時に使うデータ型が mint であると思えばよい。
    特殊な数値型なので、後述のように計算式に .val() を付記することで整数値を取り出す。

    競プロでは「〜〜の個数を 998244353 で割った余りを求めてください」といった問題が頻出する。
        ll a = 10;
        ll b = 3;
        cout << a / b % MOD << '\n';
    でもいいのだが、
        mint a = 10;
        mint b = 3;
        cout << (a / b).val() << '\n';
    のように書ける状態にしておくことで後の実装が楽になる。

    この他にも、分数の計算を行うときに活躍する。
*/


