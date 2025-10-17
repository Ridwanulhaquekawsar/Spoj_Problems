#include<bits/stdc++.h>
using namespace std;
int q,n; string cmd; bool reverse_mode=false;

void solve(){
    cin>>q;
    deque<int>dq; 
    
    
    while(q--){
        cin>>cmd;
        
        if(cmd=="toFront"){
            cin>>n;
            (!reverse_mode) ? dq.push_front(n) : dq.push_back(n);
        }
        else if(cmd=="push_back"){
            cin>>n;
            (!reverse_mode) ? dq.push_back(n) : dq.push_front(n);
        }
        else if(cmd=="front"){
            if(dq.empty()) cout<<"No job for Ada?"<<'\n';
            else{
               cout<<((!reverse_mode) ? dq.front() : dq.back())<<'\n';
               (!reverse_mode) ? dq.pop_front() : dq.pop_back();
            }
        }
        else if(cmd=="back"){
            if(dq.empty()) cout<<"No job for Ada?"<<'\n';
            else{
                cout<<((!reverse_mode) ? dq.back() : dq.front())<<'\n';
                (!reverse_mode) ? dq.pop_back() : dq.pop_front();
            }
        }
        else{
            if(!dq.empty()){
                reverse_mode=!reverse_mode;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr),solve();
    return 0;
}
