#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first

const int md=998244353;
const int N=2e5+5;


void solve()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    int ans=0;
    for(int i=1; i<=n; i++)
    {
        if(a[i]==1)
        {
            ans+=n;
            continue;
        }
        for(int j=1; j<=min(30ll, n); j++)
        {
            int vl=a[j], now=a[i], cnt=1;
            if(a[j]!=1)
            {
                while(cnt<j and now<=vl)
                {
                    now*=a[i];
                    cnt++;
                }
                if(now<=vl and cnt==j)
                {
                    ans++;
                }
            }

        }
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

