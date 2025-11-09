#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0);
using ll = long long int;
#define nl '\n'

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template<typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

ll t,n,cnt;
vector<ll>a;
pbds<ll>p;

void solve(){
    cin>>n;
    a.resize(n),p.clear();
    
    for(auto &bx : a) cin>>bx;
    
    cnt=0;
    
    for(int i=n-1; i>=0; i--){
        p.insert(a[i]);
        
        cnt+=p.order_of_key(a[i]);
    } 
    
    cout<<cnt<<nl;   
}

int main(){
    FastIO(); cin>>t; while(t--) solve();
}
