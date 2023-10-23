#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(ll n, ll m, vector<ll> &max_price, set<pair<ll, ll>> &s)
{
    for (int i = 0; i < m; i++)
    {
        auto match = s.lower_bound({max_price[i] + 1, 0});
        if (match == s.begin())
            cout << "-1" << endl;
        else
        {
            match--;
            cout << (*match).first << endl;
            s.erase(match);
        }
    }
}

int main()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> price(n), max_price(m);
    set<pair<ll, ll>> s;
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
        s.insert({price[i], i});
    }

    for (int i = 0; i < m; i++)
    {
        cin >> max_price[i];
    }
    solve(n, m, max_price, s);
    return 0;
}