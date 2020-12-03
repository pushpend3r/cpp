#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

bool isPrime(ll n)
{
  if (n <= 1)
    return false;
  if (n <= 3)
    return true;

  if (n % 2 == 0 || n % 3 == 0)
    return false;

  for (ll i = 5; i * i <= n; i = i + 6)
    if (n % i == 0 || n % (i + 2) == 0)
      return false;

  return true;
}

ll SieveOfEratosthenes(ll n)
{
  bool prime[n + 1];
  memset(prime, true, sizeof(prime));

  for (ll p = 2; p * p <= n; p++)
  {
    if (prime[p] == true)
    {
      for (int i = p * p; i <= n; i += p)
        prime[i] = false;
    }
  }

  ll count = 0;

  for (ll p = 2; p <= n; p++)
    if (prime[p] and n % p == 0)
      count++;

  return count;
}

ll t, n, q, l, r, ans;

int main(void)
{
  cin >> t;

  while (t--)
  {
    cin >> n;

    ans = 0;
    vector<ll> arr(n);

    for (ll i = 0; i < n; ++i)
      cin >> arr[i];

    cin >> q;

    while (q--)
    {
      cin >> l >> r;

      l--;
      r--;

      ll gcd = arr[l++];

      while (l <= r)
        gcd = __gcd(gcd, arr[l++]);

      ans = SieveOfEratosthenes(gcd);

      cout << ans << '\n';
    }
  }
}