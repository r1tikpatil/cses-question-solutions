#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(vector<ll> &arr, ll n)
{
    unordered_map<ll, ll> m;
    for (auto i : arr)
        m[i]++;
    cout << m.size() << endl;
}

int main()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
        
    solve(arr, n);
    return 0;
}