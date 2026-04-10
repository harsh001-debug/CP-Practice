#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


/*
    Problem link :- https://codeforces.com/problemset/problem/1788/A
    T.C :- O(n)
    S.c :- O(1)
*/

void solve(){
    int t;
        cin>>t;
        
        
        while(t--){
            int n;
            cin>>n;

            vector<int>arr(n);

            bool flag = false;
            int count2s = 0;
            for(int i=0;i<n;i++){
                cin>>arr[i];
                if(arr[i] == 2){
                    count2s++;
                }
            }

            // cout<<count2s<<endl;

            if(count2s == 0){
                cout<<1<<endl;
            }
            else if(count2s == 1){
                cout<<-1<<endl;
            }
            else{ //counts > 1
                

                if(count2s % 2 != 0){
                    cout<<-1<<endl;
                    continue;
                }
                int check2s = count2s / 2;
                int check = 0;

                for(int i=0;i<n;i++){
                    if(arr[i] == 2){
                        check++;
                    }

                    if(check == check2s){
                        cout<<i+1<<endl;
                        flag = true;
                        break;
                    }
                }
                // if(flag == false){
                //     cout<<-1<<endl;
                // }
                
            }

        }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}