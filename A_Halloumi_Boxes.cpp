#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin>>tt;
    while(tt--) {
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }
        if (k>=2) cout<<"YES\n";
        else {
            bool flag = false;
            for(int i=1; i<arr.size(); i++) {
                if (arr[i]<arr[i-1]) {flag=true; break;}
            }
            if (flag) cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
    return 0;
}