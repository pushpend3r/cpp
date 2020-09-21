#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll t, n, m, k;

int main(void)
{
  cin >> t;

  while (t--)
  {
    cin >> n >> m;

    ll mat[n][m];

    for (ll r = 0; r < n; r++)
    {
      for (ll c = 0; c < m; c++)
      {
        cin >> mat[r][c];
      }
    }

    cin >> k;

    vector<pair<int, pair<int, int>>> maxx;

    for (ll r = 0; r < n; r++)
    {
      for (ll c = 0; c < m; c++)
      {

        cout << mat[r][c] << " ";

        maxx.push_back(make_pair(mat[r][c], make_pair(r, c)));
      }

      cout << endl;
    }

    sort(maxx.begin(), maxx.end());

    cout << maxx[k - 1].second.first + 1 << " " << maxx[k - 1].second.second + 1 << endl;
  }
}