#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll k, yo; int sz;
map <ll, int> ppf;
vector <pair <ll, int>> v;
vector <pair <ll, ll>> ans;

void backtrack (int at = 0, ll num = 1) {
  if (at == sz) return void(ans.emplace_back(num, yo * yo / num));
  for (int i = 0; i <= v[at].second; ++i) {
    backtrack(at + 1, num);
    num *= v[at].first;
  }
}

int main() {
  cin >> k; yo = k;
  for (ll i = 2; i * i <= k; ++i) {
    if (k % i == 0) {
      int e = 0;
      while (k % i == 0) k /= i, ++e;
      ppf[i] = e;
    }
  }
  if (k > 1) ppf[k] = 1;
  for (auto it : ppf) {
    v.emplace_back(it.first, it.second << 1);
  }
  sz = v.size(); backtrack();
  int res = (int) ans.size();
  printf("%d\n", res);
  for (auto it : ans) {
    printf("%lld %lld\n", it.first + yo, it.second + yo);
  }
  return 0;
}

