#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

ll t, g, len;
string s;

int main(void)
{
  cin >> t;

  while (t--)
  {
    cin >> s;
    g = 0;
    len = s.length();

    for (ll i = 0; i < len; ++i)
    {
      if ((i == 0 and s[i] == '1') or (s[i] == '1' and s[i - 1] != '1'))
        g++;
    }

    cout << g << '\n';
  }
}