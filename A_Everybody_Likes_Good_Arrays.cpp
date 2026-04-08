#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
    Problem link :- https://codeforces.com/problemset/problem/1777/A
    Problem statement :- 
*/

void solve(){
    int t;
    cin>>t;
    
    
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        int count = 0;
        for (int i = 0; i < n; i++){
            if(((arr[i] + arr[i+1]) % 2 == 0) && (i+1 < n)){
                count++;
            }
        }

        cout<<count<<endl;
        
        
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}