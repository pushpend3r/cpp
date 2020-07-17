#include <bits/stdc++.h>

using namespace std;

typedef unsigned long int ul;

ul n;
string g, b;

int main(void)
{
  cin >> n;
  cin >> b >> g;

  queue<char> grooms;

  for (auto &i : g)
  {
    grooms.push(i);
  }

  ul rejected = 0;

  for (ul i = 1; i <= n; ++i)
  {
    while (grooms.front() != b[i - 1])
    {
      rejected++;
      grooms.push(grooms.front());
      grooms.pop();

      if (rejected == grooms.size())
        break;
    }

    if (grooms.front() == b[i - 1])
    {
      grooms.pop();
      rejected = 0;
    }
    else
    {
      break;
    }
  }

  cout << rejected;
}