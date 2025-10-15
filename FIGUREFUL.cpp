#include<bits/stdc++.h>
using namespace std;
int n,a,b,t; string name;
map<pair<int,int>,string>fr;

void solve(){
    cin>>n;
    
    while(n--){
        cin>>a>>b>>name;
        fr[{a,b}]=name;
    }
    
    cin>>t;
    
    while(t--){
        cin>>a>>b;
        cout<<fr[{a,b}]<<'\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); solve();
    return 0;
}
