#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={4,37,35,5,6,7,8,9,0,11,12,37,13,14,14,15,16};
    int n=17;
    int mx=arr[0];
    int smx=0;
    for (int i=0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        if(arr[i] > mx){
            smx=mx;
            mx=arr[i];  
        }
        if((arr[i]>smx) and (arr[i]<mx)){
            smx=arr[i];
        }
    }
    cout<<mx<<" "<<smx<<endl;
    cout<<arr[n-3];
    return 0;
    
}