#include<bits/stdc++.h>
using namespace std;


/*
    Problem link :- https://codeforces.com/problemset/problem/1806/A
    
*/

void solve(){
    int t;
    cin>>t;

    while(t--){
        int sx,sy,dx,dy;
        cin>>sx>>sy>>dx>>dy;

        if(dy < sy){
            cout << -1<<endl;
        }
        else{

            int step_up = (dy - sy);
            sy += step_up;
            sx += step_up;
            // cout<<step_up<<" "<<sy<<" "<<sx<<endl;

            if(sx < dx){
                cout<<-1<<endl;
            }
            else{ // sx <= dx
                int step_left = abs(dx - sx);
                // cout<<step_left<<endl;
                int total_moves = step_up + step_left;
                cout<<total_moves<<endl;

                
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