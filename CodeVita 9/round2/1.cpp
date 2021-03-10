#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long ull;

ull r, c, i, j, rScan, cScan;

int main(void)
{
  cin >> r >> c;

  ll matrix[r][c];
  rScan = cScan = 0;

  for (i = 0; i < r; ++i)
  {
    for (j = 0; j < c; ++j)
      cin >> matrix[i][j];
  }

  for (i = 0; i < r; ++i)
  {
    for (j = 0; j < c; ++j)
    {
      if (matrix[i][j] != 6)
        continue;

      if (j == 0 or matrix[i][j] != matrix[i][j - 1])
        rScan++;
    }
  }

  cout << rScan << endl;
}