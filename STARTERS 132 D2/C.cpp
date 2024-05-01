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
    int n;
    cin>>n;
    vector<int>v;
    int cnt=0;
    int ans=(n*(n+1))/2ll;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if(x%2)
        {
            cnt++;
        }
        else
        {
            v.pb(cnt);
            cnt=0;
        }
    }
    if(cnt)
    {
        v.pb(cnt);
    }
    if(v.size()==0)
    {
        cout<<ans<<endl;
        return;
    }
    sort(v.begin(), v.end());
    int k=v.size();
    int last=v[k-1];
    int l=last/2, r=last-l;
    r-=1;
    v.pop_back();
    v.pb(l), v.pb(r);
    k++;
    for(int i=0; i<k; i++)
    {
        ans-=(v[i]*(v[i]+1))/2ll;
    }
    cout<<ans<<endl;
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

