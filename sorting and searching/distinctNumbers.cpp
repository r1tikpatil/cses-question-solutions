#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(vector<ll> &arr, ll n)
{
    sort(arr.begin(), arr.end());
    ll count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
            count++;
    }
    cout << count << endl;
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