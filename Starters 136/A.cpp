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
    string s;
    cin>>s;
    int cnt=0;
    for(auto it:s)
    {
        cnt+=(it=='1');
    }
    if(cnt==1)
    {
        cout<<11<<endl;
        return;
    }
    if(cnt==2)
    {
        if(s=="1100" or s=="0011")
        {
            cout<<21<<endl;
        }
        else
        {
            cout<<121<<endl;
        }
        return;
    }
    else if(cnt==3)
    {
        cout<<231<<endl;
        return;
    }
    else
    {
        cout<<441<<endl;
    }
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

