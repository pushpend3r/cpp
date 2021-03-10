#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

ll t, c, d;

int main(void)
{
  cin >> t;

  while (t--)
  {
    cin >> c;

    d = ceil(log2(c));

    if (pow(2, d) == c)
      d++;

    cout << d << endl;
  }
}