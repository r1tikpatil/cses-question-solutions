#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    for (int i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        pq.push({a, 1});
        pq.push({b, -1});
    }

    int count = 0;
    int ans = 0;

    while (!pq.empty())
    {
        count += pq.top().second;
        ans = max(ans, count);
        pq.pop();
    }

    cout << ans << endl;

    return 0;
}