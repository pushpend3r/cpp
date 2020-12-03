#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

ll t, k, n, temp;
int main(void)
{
  cin >> t;
  while (t--)
  {
    cin >> n >> k >> s;

    vector<ll> zeroCount;
    temp = 0;

    for (auto &i : s)
    {
      if (i == '1')
      {
        if (temp != 0)
        {
          zeroCount.push_back(temp);
          temp = 0;
        }
      }
      else
        temp++;
    }

    if (temp != 0)
      zeroCount.push_back(temp);

    ll zSize = zeroCount.size(), sSize = s.size();

    if (zSize == 1)
    {
      if (s.at(0) and )
      {
      }
    }

    ll totalZeroes = accumulate(zeroCount.begin(), zeroCount.end(), 0);

    if (zeroCount.at(0) == 0 and zeroCount.at(len - 1))
    {
    }

    cout << '\n';
  }
}