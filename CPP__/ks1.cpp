#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0,count=0,ans=0;
    
    while(i<n-1){
        if(arr[i] != k){
            i++;
            continue;
        }
        if(arr[i]-1 == arr[i+1]){
            count++;
            
        }
        else {
            if(count == k-1){
            ans++;
            }
            count=0;
        }
        i++;
    }
    cout<<ans;


return 0;
}