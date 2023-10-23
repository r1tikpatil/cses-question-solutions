#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(vector<ll> &arr, ll n, ll m, ll k, vector<ll> &apartment_size)
{
    ll count = 0;
    sort(apartment_size.begin(), apartment_size.end());
    sort(arr.begin(), arr.end());

    int i = 0, j = 0;
    while (i < n)
    {
        while (j < m && apartment_size[j] < arr[i] - k)
            j++;
        if (abs(apartment_size[j] - arr[i]) <= k)
        {
            count++;
            i++;
            j++;
        }
        else
            i++;
    }

    cout << count << endl;
}

int main()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> arr(n), apartment_size(m);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < m; i++)
        cin >> apartment_size[i];

    solve(arr, n, m, k, apartment_size);
    return 0;
}