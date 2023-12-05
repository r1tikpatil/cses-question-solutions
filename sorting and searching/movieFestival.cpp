#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(pair<ll, ll> &a, pair<ll, ll> &b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}

void solve(vector<pair<ll, ll>> &arr, int n)
{
    sort(arr.begin(), arr.end(), cmp);
    int ans = 1;
    auto temp = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i].first >= temp.second)
        {
            ans++;
            temp = arr[i];
        }
    }
    cout << ans << endl;
}

int main()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> arr;
    for (int i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        arr.push_back({a, b});
    }

    solve(arr, n);

    return 0;
}