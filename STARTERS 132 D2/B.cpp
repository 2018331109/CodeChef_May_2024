#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first

const int md=998244353;
const int N=200005;


void solve()
{
    int n, k;
    cin>>n>>k;
    vector<int>v(101, 0);
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        int cnt=0, ind=0;
        for(int j=0; j<k; j++)
        {
            if(s[j]=='1')
            {
                cnt++;
                ind=j;
            }
        }
        if(cnt==1)
        {
            v[ind]++;
        }
    }
    for(int i=0; i<k; i++)
    {
        if(!v[i])
        {
            no;
            return;
        }
    }
    yes;

}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int test = 1;
    cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

