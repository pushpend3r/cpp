#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  int arr[] = {8, 7, 2, 5, 3, 1};
  int size = sizeof(arr) / sizeof(arr[0]);
  int desiredSum = 10;

  /*
  sort(arr, arr + size);

  int l = 0, h = size - 1;

  while (l < h)
  {
    if (arr[l] + arr[h] == desiredSum)
      break;

    (arr[l] + arr[h] > desiredSum ? h-- : l++);
  }

  if (l == h)
    cout << "Sorry";
  else
    cout << arr[l] << " " << arr[h];
  cout << '\n';
  */

  unordered_map<int, bool> mp;

  for (auto &i : arr)
  {
    if (mp[desiredSum - i])
    {
      cout << i << " " << desiredSum - i << endl;
    }

    mp[i] = true;
  }
}