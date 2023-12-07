#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(vector<ll> &arr, ll n)
{
    ll currSum = arr[0], maxSum = arr[0];
    for (int i = 1; i < n; i++)
    {
        currSum = max(currSum + arr[i], arr[i]);
        maxSum = max(maxSum, currSum);
    }

    cout << maxSum << endl;
    return;
}

int main()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    solve(arr, n);
    return 0;
}