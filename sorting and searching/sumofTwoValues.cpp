#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(vector<pair<ll, ll>> &arr, ll n, ll x)
{
    sort(arr.begin(), arr.end());

    int i = 0, j = n - 1;

    while (i < j)
    {
        ll a = arr[i].first, b = arr[j].first;
        ll sum = a + b;
        if (sum == x)
        {
            cout << arr[i].second << " " << arr[j].second << endl;
            return;
        }
        else if (sum > x)
            j--;
        else
            i++;
    }

    cout << "IMPOSSIBLE" << endl;
}

int main()
{
    ll n, x;
    cin >> n >> x;
    vector<pair<ll, ll>> arr(n);
    for (int i = 0; i < n; i++)
    {
        ll ele;
        cin >> ele;
        arr[i] = {ele, i + 1};
    }

    solve(arr, n, x);
    return 0;
}