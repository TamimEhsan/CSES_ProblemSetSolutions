#include<bits/stdc++.h>
using namespace std;
#define INF 2147483647
#define INFL 9223372036854775807
#define pii pair<int,int>
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define ll long long
#define ull unsigned long long
#define M 1000000007
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
#define take(x) scanf("%d",&x)
#define DE(x) printf("\ndebug %d\n",x);
#define vout(x) for(int i=0;i<x.size();i++) printf("%d ",x[i]);
#define pie acos(-1)
#define MOD 998244353

int main(){
    FASTIO;
    int n;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++){
        cin>>ara[i];
    }
    multiset<int> ms;
    int res = 0;
    for(int i=0;i<n;i++){
        auto it = ms.upper_bound(ara[i]);
        if( it!=ms.end() ){
            ms.erase(it);
            ms.insert(ara[i]);
        } else{
            ms.insert(ara[i]);
            res++;
        }
    }
    cout<<res;

}
