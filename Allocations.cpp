// https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ffc7/00000000001d3f56#problem

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;
typedef long long int ll;

ll t, b, n, arr[100000], ans;

int main(void)
{
  cin >> t;
  for (ll i = 0; i < t; ++i)
  {
    cin >> n >> b;

    ans = 0;

    for (ll x = 0; x < n; ++x)
    {
      cin >> arr[x];
    }

    sort(arr, arr + n);

    for (ll x = 0; x < n; ++x)
    {
      b -= arr[x];
      ans++;

      if (b < 0)
      {
        ans--;
        break;
      }
    }

    cout << "Case #" << i + 1 << ": " << ans << '\n';
  }
}