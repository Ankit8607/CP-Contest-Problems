#include<bits/stdc++.h>
using namespace std;
const int mod= 10000007;
#define endl "\n"
#define F first
#define S second
#define int long long
#define vi vector<int>
#define ii pair<int,int>
#define all(a) a.begin(),a.end()
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define tracearray(arr,n)  cout<<#arr<<endl;for(int i=0;i<n;i++)cout<<arr[i]<<" ";cout<<endl;

void solve(){
    int n; cin>>n;
    int arr[n];
    int cnt1=0,cnt2=0;
    for(int i=0;i<n;i++){ 
        cin>>arr[i];
        if(arr[i]%2) cnt1++;
        else cnt2++;
    }
    sort(arr,arr+n);
    if(cnt1>1 and cnt2>1) cout<<"NO"<<endl;
    else{
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
    }
}

signed main(){
    IOS
    int t=1; cin>>t; while(t--) 
    solve();
    return 0;
}