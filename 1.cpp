#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

short t;
ll n, previous, current, ans, temp;

int main(void)
{
    cin >> t;

    while (t--)
    {
        cin >> n;

        ans = 0;
        previous = 0;

        while (n--)
        {
            cin >> current;
            temp = abs(current - previous);
            if (temp != 0)
                ans += (temp - 1);
            previous = current;
        }

        cout << ans << endl;
    }
}