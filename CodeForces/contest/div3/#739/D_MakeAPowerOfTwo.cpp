#include <bits/stdc++.h>
using namespace std;

#define fxdp fixed<<setprecision
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define pll pair<long, long>
#define mli map<long long, int>
#define msi map<string, int>
#define all(a) a.begin(),a.end()
#define FOR(i,a,n) for(int i = a; i<n; ++i)
#define SORT(a) sort(a.begin(), a.end())
#define MOD 1000000007

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int T; cin>>T;
    while(T--)
    {
        string s; cin>>s;
        int ans = 1e9;
        for (int i = 0; i<65; ++i)
        {
            string tmp = to_string(1ULL<<i);
            int k = 0;
            for (int j = 0; j<s.size(); ++j)
                if (k<tmp.size() && s[j] == tmp[k]) k++;
            ans = min(ans, int(s.size() + tmp.size()) - 2*k);
        }
        cout<<ans<<endl;
    }
    return 0;
}