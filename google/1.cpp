#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

ll sumofPositiveDivisor(ll n)
{
  ll limit = n / 2 + 1, sum = 0;
  for (ll i = 1; i < limit; ++i)
  {
    if (n % i == 0)
      sum += i;
  }

  return sum;
}

ll t, n;

int main(void)
{
  cin >> t;

  while (t--)
  {
    cin >> n;

    if (sumofPositiveDivisor(n) != n)
      cout << "NO";
    else
      cout << "YES";

    cout << '\n';
  }
}