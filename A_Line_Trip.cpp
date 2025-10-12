#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin>>tt;
    while(tt--) {
        int n,x;
        cin>>n>>x;
        vector<int> arr(n);
        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }
        int ans = max(2*(x-arr[n-1]),arr[0]);
        for(int i=1; i<n; i++) {
            ans = max(ans,arr[i]-arr[i-1]);
        }
        cout<<ans<<"\n";
    }
}