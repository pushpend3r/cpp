#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;
typedef long long int ll;

int findMin(int arr[], int i, int sumCalculated, int sumTotal)
{
  if (i == 0)
    return max(sumTotal - sumCalculated, sumCalculated);

  return min(findMin(arr, i - 1, sumCalculated + arr[i - 1], sumTotal), findMin(arr, i - 1, sumCalculated, sumTotal));
}

int p[49];
int idx = 0;

int main(void)
{
  string S, T;

  getline(cin, S);

  stringstream X(S);

  while (getline(X, T, ' '))
  {
    p[idx++] = stoi(T);
  }

  int totalSum = 0;

  for (int i = 0; i < idx; ++i)
    totalSum += p[i];

  cout << findMin(p, idx, 0, totalSum) << endl;
}