// https://www.codechef.com/COOK122B/problems/BOWLERS

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

ll t, n, k, l;

int main(void)
{
  cin >> t;

  while (t--)
  {
    cin >> n >> k >> l;

    if (k * l >= n and k != 1)
    {
      ll i = 1;
      for (ll x = 0; x < n; ++x)
      {
        cout << i << ' ';
        if (i == k)
          i = 0;
        i++;
      }
    }
    else
    {
      if (k == 1 and n == 1)
        cout << 1;
      else
        cout << -1;
    }

    cout << '\n';
  }
}