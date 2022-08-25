#include<bits/stdc++.h>
using namespace std;

int edit_count(int count[],int n){
    for(int i =1;i<n;i++){
        count[i]+=count[i-1];
    }
}
void display(int count[],int maxi){
    for(int i=0;i<maxi;i++){
        cout<<count[i];
    }
    cout<<endl;
}
void placement(int count[],int arr[],int n){
    int ans[n];
    for(int i=0;i<n;i++){
        ans[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int maxi = -999;
    for(int i=0;i < n;i++){
        cin>>arr[i];
        maxi = max(maxi,arr[i]); 
    }
    maxi++;
    cout<<maxi<<endl;
    int count[maxi+1];
    for(int i =0;i<maxi;i++){
        count[i]=0;
    }
    display(count,maxi);
    for(int i =0;i<n;i++){
        count[arr[i]]++;
    }
    display(count,maxi);
    edit_count(count,maxi);
    display(count,maxi);
    placement(count,arr,n);
    

    return 0;
}