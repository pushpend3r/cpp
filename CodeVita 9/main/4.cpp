#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

typedef unsigned long long int ull;
typedef long long int ll;

ll g, l[9999], max_length, b, h;

bool isVaild(ll r, ll c)
{
  if (c >= l[r])
    return 0;
  return 1;
}

int main(void)
{
  cin >> g >> b >> h;

  for (ll x = 0; x < g; ++x)
    cin >> l[x];

  ll max_length = *max_element(l, l + g);

  ll sums[g][max_length];

  for (ll c = 0; c < l[0]; ++c)
  {
    sums[0][c] = c + 1;
  }

  for (ll r = 1; r < g; ++r)
  {
    for (ll c = 0; c < l[r]; ++c)
    {
      if (isVaild(r - 1, c))
        sums[r][c] = ((sums[r - 1][c] % mod) + (c % mod) + 1) % mod;
      else
        sums[r][c] = (c + 1) % mod;
    }
  }

  ll maximum = 0;

  for (ll r = 0; r < g; ++r)
  {
    for (ll c = 0; c < l[r]; ++c)
    {
      if (maximum < sums[r][c])
        maximum = sums[r][c];
    }
  }

  ll largestCubiodVolume = (((maximum * b) % mod) * (h % mod)) % mod;
  ll totalVolume = 0;

  for (ll x = 0; x < g; ++x)
    totalVolume = (totalVolume + l[x]) % mod;

  totalVolume = (((totalVolume * b) % mod) * (h % mod)) % mod;

  ll ans = totalVolume - largestCubiodVolume;

  cout << ans;
}