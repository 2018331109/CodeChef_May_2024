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
const int N = 2e5+5;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=1, ans=0;
    for(int i=1; i<n; i++)
    {
        if(s[i]==s[i-1])
        {
            cnt++;
        }
        else
        {
            cnt++;
            ans+=cnt/2;
            cnt=1;
        }
    }
    cnt++;
    ans+=cnt/2;
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

