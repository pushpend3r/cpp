#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;
typedef long long int ll;

ll t, h, p;

int main(void)
{
  cin >> t;

  while (t--)
  {
    cin >> h >> p;

    while (h > 0 and p)
    {
      h -= p;
      p /= 2;
    }

    if (h > 0)
    {
      cout << 0;
    }
    else
    {
      cout << 1;
    }

    cout << '\n';
  }
}