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
    int n, m;
    cin>>n>>m;
    int a[n], b[m];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }
    sort(a, a+n);
    sort(b, b+m);
    if(n<4 or m<4 or n+m<11)
    {
        neg;
        return;
    }

    int ans=0, i=n-1, cnt=4, j=0;

    while(cnt--)
    {
        ans+=a[i];
        i--;
    }
    i=m-1, cnt=4;
    while(cnt--)
    {
        ans+=b[i];
        i--;
    }
    i=n-5, j=m-5, cnt=3;
    while(cnt--)
    {
        if(i<0)
        {
            ans+=b[j];
            j--;
        }
        else if(j<0)
        {
            ans+=a[i];
            i--;
        }
        else if(i>=0 and a[i]>=b[j])
        {
            ans+=a[i];
            i--;
        }
        else
        {
            ans+=b[j];
            j--;
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

