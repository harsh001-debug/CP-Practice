#include<bits/stdc++.h>
using namespace std;


/*
    Problem link :- https://codeforces.com/problemset/problem/1903/A
    Problem statement :- 
*/

bool isSorted(vector<int>&arr){

    bool flag = true;
    for(int i=0;i<arr.size();i++){
        if(arr[i] > arr[i+1]  && (i+1 < arr.size())){
            flag = false;
            break;
        }
        
    }
    return flag;
}


void solve(){
    int t;
        cin>>t;
        
        while(t--){
            int n,k;
            cin>>n>>k;

            vector<int>arr(n);
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }

            if(isSorted(arr) == true){
                cout<<"YES"<<endl;
            }
            else{
                if(k > 1){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            
        }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}