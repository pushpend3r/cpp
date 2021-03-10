#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

ll n, h, x, t;
bool isPossible = 0;

int main(void)
{
  cin >> n >> h >> x;

  for (ll i = 0; i < n; ++i)
  {
    cin >> t;
    if (t + x >= h)
    {
      isPossible = 1;
      break;
    }
  }

  if (isPossible)
    cout << "yes";
  else
    cout << "no";
}