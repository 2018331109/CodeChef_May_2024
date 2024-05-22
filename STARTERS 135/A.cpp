#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first

const int md=998244353;
const int N = 2e5+5;


void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=1;
    int i=1;
    int z=0, o=0;
    while(i<n)
    {
        if(s[i]!=s[i-1])
        {
            if(s[i-1]=='0')
            {
                o++;
            }
            else
            {
                z++;
            }
        }
        i++;
    }
    if(s[i-1]=='0')
    {
        o++;
    }
    else
    {
        z++;
    }
    int ans=min(z, o);
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

