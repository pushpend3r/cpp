#include <bits/stdc++.h>
using namespace std;

int n;

bool compfunc(vector<int> &a, vector<int> &b) { return a[0] < b[0]; }

int main(void)
{
  cin >> n;
  int temp, min, max;
  vector<vector<int>> bitScore(n, vector<int>(3));
  int pos = 0;

  for (int i = 0; i < n; ++i)
  {
    cin >> temp;
    auto str = to_string(temp);
    min = *min_element(str.begin(), str.end()) - '0';
    max = *max_element(str.begin(), str.end()) - '0';
    str = to_string(min * 7 + max * 11);
    int strLen = str.length();

    if (strLen == 1)
    {
      bitScore[pos][0] = '0';
      bitScore[pos][1] = str[0];
    }
    else
    {
      bitScore[pos][0] = str[strLen - 2];
      bitScore[pos][1] = str[strLen - 1];
    }
    bitScore[pos][2] = pos + 1;
    pos++;
  }

  sort(bitScore.begin(), bitScore.end(), compfunc);

  // for (int i = 0; i < n; ++i)
  //   cout << char(bitScore[i][0]) << char(bitScore[i][1]) << " " << bitScore[i][2] << endl;

  int even = 0, odd = 0;
  int pairs = 0;

  for (int i = 0; i < n - 1; ++i)
  {
    if (bitScore[i][2] % 2)
      odd++;
    else
      even++;

    if (bitScore[i][0] != bitScore[i + 1][0])
    {
      if (even == 0 or even > 3)
        even = 1;
      if (odd == 0 or odd > 3)
        odd = 1;

      pairs += std::max(even, odd) - 1;
      even = odd = 0;
    }
  }

  if (bitScore[n - 1][2] % 2)
    odd++;
  else
    even++;

  if (even == 0 or even > 3)
    even = 1;
  if (odd == 0 or odd > 3)
    odd = 1;

  pairs += std::max(even, odd) - 1;

  cout << pairs << endl;
}