#include<bits/stdc++.h>
using namespace std;


/*
    Problem link :- https://codeforces.com/problemset/problem/1878/C
    
*/

void solve(){
    int t;
    cin>>t;

    while(t--){
        long long n,k,x;
        cin>>n>>k>>x;

        long long minimum_sum = (k * (k + 1)) / 2;
        long long maximum_sum = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;
        
        if (x >= minimum_sum && x <= maximum_sum)
			cout << "YES" << endl;  
		else
			cout << "NO" << endl;  
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}