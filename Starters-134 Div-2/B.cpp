#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first

const int md=998244353;
const int N = 2e5+5;
vector<int>ans(180, 0);
int call(int now)
{
    int sum=0;
    while(now>0)
    {
        sum+=now%10;
        now/=10;
    }
    return sum;
}
void solve()
{
    int n;
    cin>>n;
    int ans=45ll*(n/9ll)+((n%9ll)*(n%9ll+1ll))/2ll;
    cout<<ans<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int test = 1;
    cin >> test;
//    for(int i=1; i<180; i++)
//    {
//        int now=i;
//        while(now>0 and !ans[now])
//        {
//            now=call(now);
//            ans[i]+=now;
//        }
//        //ans[i]+=ans[now];
//    }
//    for(int i=1; i<180; i++)
//    {
//        ans[i]+=ans[i-1];
//    }
//    for(int i=0;i<13;i++)
//    {
//        cout<<ans[i]<<" ";
//    }
//    cout<<endl;
    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

