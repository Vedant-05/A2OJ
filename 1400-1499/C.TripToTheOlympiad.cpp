#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using db = long double; // or double if tight TL
using str = string;

using pi = pair< int, int >;
#define mp make_pair
#define f first
#define s second

#define tcT template < class T
tcT > using V = vector< T >;
tcT, size_t SZ > using AR = array< T, SZ >;
using vi = V< int >;
using vb = V< bool >;
using vpi = V< pi >;

#define sz(x) int((x).size())
#define all(x) begin(x), end(x)
#define sor(x) sort(all(x))
#define rsz resize
#define pb push_back
#define ft front()
#define bk back()

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, a) FOR(i, 0, a)
#define ROF(i, a, b) for (int i = (b) - 1; i >= (a); --i)
#define R0F(i, a) ROF(i, 0, a)
#define rep(a) F0R(_, a)
#define each(a, x) for (auto &a : x)

const int MOD = 1e9 + 7;
const db PI = acos((db)-1);

tcT > bool ckmin(T &a, const T &b) {
  return b < a ? a = b, 1 : 0;
} // set a = min(a,b)
tcT > bool ckmax(T &a, const T &b) {
  return a < b ? a = b, 1 : 0;
} // set a = max(a,b)

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int t;
  cin >> t;

  while (t--) {
    int l, r;
    cin >> l >> r;
    int a = 0, b = 0;

    for (int i = 30; i >= 0; i--) {
      bool isItonel = false;
      bool isItoner = false;

      if (l & (1 << i)) {
        isItonel = true;
      }
      if (r & (1 << i)) {
        isItoner = true;
      }
      if (isItonel == isItoner) {
        if (isItonel) {
          int temp = 1;
          a = a | temp << i;
          b = b | temp << i;
        }
      } else {
        b = b | (1 << i);

        i--;
        while (i >= 0) {
          a = a | (1 << i);
          i--;
        }
      }
    }
    int c = 0;
    for (int i = l; i <= r; i++) {
      if (i != a && i != b) {
        c = i;
        break;
      }
    }

    cout << a << " " << b << " " << c << endl;
  }
}
