#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(vector<ll> &arr, ll n, ll x)
{
    ll count = 0;
    sort(arr.begin(), arr.end());
    int i = 0, j = n - 1;
    while (i <= j)
    {
        if (arr[i] + arr[j] <= x)
        {
            i++;
        }
        j--;
        count++;
    }
    cout << count << endl;
}

int main()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    solve(arr, n, x);
    return 0;
}