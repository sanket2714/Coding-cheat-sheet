#include <bits/stdc++.h>

//fast input/output
#define FASTIO ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

//initializers
#define MOD 1e9+7;
#define IN cin>>
#define OUT cout<<
#define ll long long
#define endl '\n'

// loops
#define loop(i,a,n) for(long long i=a; i<n; i++)
#define rloop(i,a,n) for(long long i=a; i>=n; i--)

//data structures
#define vll vector<ll> 
#define vvll vector< vector < long long > >
#define mpl map<ll>
#define mpll map<ll,ll>
#define mpls map<ll,string>
#define graph(n) vector<int> adj[n]

//operations
#define mp make_pair
#define pll pair<ll, ll>
#define all(a) a.begin(),a.end()
#define pub push_back
#define pob pop_back
#define eb emplace_back
#define debug cout<<"debugging"<<endl
#define in(n) ll n;cin>>n

using namespace std;

//usefull functions

//prime using sieve
vll prime;
ll seive(ll n){
    bool p[n+1];
    memset(p,1,sizeof(p));
    for(ll i=2;i*i<=n;i++){
        if(p[i]){
            for(ll j=i*2;j<=n;j+=i){
                p[j]=false;
            }
        }
    }
    for(ll i=2;i<=n;i++) 
      if(p[i]) 
        prime.pb(i);
}


//driver function
int main(){
  ll t;
  IN t;
  while(t--){
  
  } 
  return 0;
}
