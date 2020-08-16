#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;
typedef long long int ll;

ll n, tempCount, A_Count, B_Count;
bool flag;
string str;

int main(void)
{
  cin >> n >> str;
  tempCount = A_Count = B_Count = flag = 0;
  for (auto &i : str)
  {
    if (i == 'A')
    {
      A_Count++;

      if (flag)
      {
        A_Count += tempCount / 2;
        B_Count += tempCount / 2;
      }
      else
      {
        A_Count += tempCount;
      }

      flag = 0;
      tempCount = 0;
    }
    else if (i == 'B')
    {
      if (flag)
      {
        B_Count += tempCount;
      }

      flag = 1;
      tempCount = 0;
      B_Count++;
    }
    else
    {
      tempCount++;
    }
  }

  if (tempCount && flag)
  {
    B_Count += tempCount;
  }

  if (A_Count > B_Count)
  {
    cout << 'A';
  }
  else if (B_Count > A_Count)
  {
    cout << 'B';
  }
  else
  {
    cout << "Coalition government";
  }
}