

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const int dx[] = {-1, 0, 1, 0, -1, -1, 1, 1};
const int dy[] = {0, 1, 0, -1, 1, -1, 1, -1};
#define N 10005
#define eps 1e-5
#define pai acos(-1)
#define MOD 1e9 + 7
ll num[3] = {2, 3, 5};
int main() {
#ifndef ONLINE_JUDGE
  freopen("in.txt", "r", stdin);
  ll _begin = clock();
#endif
  int n;
  while (scanf("%d", &n) && n) {
    priority_queue<ll, vector<ll>, greater<ll> > s;
    set<ll> ugly;
    s.push(1);
    ugly.insert(1);
    for (int i = 1;; i++) {
      ll x = s.top();
      s.pop();
      if (i == n) {
        printf("%lld\n", x);
        break;
      }
      for (int j = 0; j <= 2; j++) {
        ll x2 = x * num[j];
        if (!ugly.count(x2)) {
          s.push(x2);
          ugly.insert(x2);
        }
      }
    }
  }
#ifndef ONLINE_JUDGE
  ll _end = clock();
  printf("%lldms\n", _end - _begin);
#endif
  return 0;
}
