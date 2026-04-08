#include<bits/stdc++.h>
using namespace std;


/*
    Problem link :- https://codeforces.com/problemset/problem/1829/B
*/

void solve(){
    int t;
    cin>>t;
    
    
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        int central_count = 0,count = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        for(int i=0;i<n;i++){
            if(arr[i] == 0){ //encountered a zero
                count++;
            }
            else{ //encountered a 1
                count = 0;
            }

            central_count = max(central_count,count);
        }

        cout<<central_count<<endl;
        

    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}