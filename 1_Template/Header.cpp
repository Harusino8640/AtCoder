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
    mint について、まずたとえば 3 * 332748118 ≡ 1 (mod 998244353) だが、
    このとき「3は法998244353に対して可逆であり、332748118は法998244353に関する3の逆元である」という。
    この逆元を算出する時に使うデータ型が mint であると思えばよい。

    競プロでは「〜〜の個数を 998244353 で割った余りを求めてください」といった問題が頻出する。
        ll a = 10;
        ll b = 3;
        cout << a * b % MOD << '\n';
    でもいいのだが、
        mint a = 10;
        mint b = 3;
        cout << (a * b).val() << '\n';
    のように書ける状態にしておくことで後の実装が楽になる。

    mintは数値型として特殊であり、計算式に .val() を付記することで整数を取り出すことができる。

*/


