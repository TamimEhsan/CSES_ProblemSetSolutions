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
    int n,x;
    take(n); take(x);
    int ara[n];
    pii para[n];
    for(int i=0;i<n;i++){
        take(ara[i]);
        para[i] =mp(ara[i],i+1);
    }
    sort(ara,ara+n);
    sort(para,para+n);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if( binary_search(ara+j+1,ara+n,x-ara[i]-ara[j]) ){
                int pos = lower_bound(ara+j+1,ara+n,x-ara[i]-ara[j])-ara;
                cout<<para[i].S<<" "<<para[j].S<<" "<<para[pos].S;
                return 0;
            }
        }
    }
    cout<<"IMPOSSIBLE";

}
