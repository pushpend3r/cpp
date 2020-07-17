#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;

ull maxL, minL, maxW, minW, ans;

ull possibleSquare(ull w, ull l)
{
  if (w == 0 or l == 0)
    return 0;
  if (w < l)
    std::swap(w, l);
  return 1 + possibleSquare(w - l, l);
}

int main(void)
{
  cin >> minL >> maxL >> minW >> maxW;

  ans = 0;

  for (int i = minL; i <= maxL; ++i)
  {
    for (int j = minW; j <= maxW; ++j)
    {
      ans += possibleSquare(i, j);
    }
  }

  cout << ans << endl;
}