#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;
typedef long long int ll;

ll findingMax(ll r, ll platesNeeded, ll result);

ll t, k, p, n, ans, stk[50][30];

int main(void)
{
  cin >> t;

  for (ll y = 1; y <= t; ++y)
  {
    cin >> n >> k >> p;

    for (ll r = 0; r < n; ++r)
    {
      for (ll c = 0; c < k; ++c)
      {
        cin >> stk[r][c];
      }
    }

    ans = 0;

    // Cummlative Sums
    for (ll r = 0; r < n; ++r)
    {
      for (ll c = 1; c < k; ++c)
      {
        stk[r][c] += stk[r][c - 1];
      }
    }

    cout << "Case #" << y << ": " << ans << '\n';
  }
}

ll findingMax(ll r, ll platesNeeded, ll result)
{
  ll max_sum = 0, temp;

  if (r == n)
    return result;

  for (ll c = 0; c < k; ++c)
  {
    if (platesNeeded - (c + 1) > (n - r + 1) * k)
      continue;

    temp = stk[r][c] + findingMax(r + 1, platesNeeded - (c + 1), result + stk[r][c]);

    if (temp > max_sum)
      max_sum = temp;
  }

  return result + max_sum;
}