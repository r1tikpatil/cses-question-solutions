#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(vector<ll> &arr, ll n, ll m, ll k, vector<ll> &apartment_size)
{
    ll count = 0;
    sort(apartment_size.begin(), apartment_size.end());

    for (int i = 0; i < n; i++)
    {
        int ind = lower_bound(apartment_size.begin(), apartment_size.end(), arr[i]) - apartment_size.begin();
        if ((ind != m && (arr[i] > (apartment_size[ind] - k) && arr[i] < (apartment_size[ind] + k))) || (ind != 0 && (arr[i] > (apartment_size[ind - 1] - k) && arr[i] < (apartment_size[ind - 1] + k))) || (ind + 1 != m && (arr[i] > (apartment_size[ind + 1] - k) && arr[i] < (apartment_size[ind + 1] + k))))
            count++;
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