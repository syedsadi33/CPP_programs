#include<bits/stdc++.h>
using namespace std;

int merger(int arr[],int l,int mid,int r){
    int n1 = mid-l+1;
    int n2 = r-mid;
    int a[n1];
    int b[n2];

    for (int i=0; i < n1; i++)
    {
        a[i]=arr[l+i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i]=arr[mid+1+i];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]=b[j];
            i++,k++;
        }
        else{
            arr[k]=a[i];
            j++,k++;
        }
    }
    while(i<n1){
        arr[k]=a[i];
        i++,k++;
    }
    while(j<n2){
        arr[k]=b[j];
        j++,k++;
    }
}


void splitter(int arr[],int l,int r){
    while(l<r){
        int mid = (l+r)/2;
        splitter(arr,l,mid);
        splitter(arr,mid+1,r);

        merger(arr,l,mid,r);
    }

}



int main(){
    int arr[5]={5,4,3,2,1};
    splitter(arr,0,5);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i];
    }
    
    
    return 0;
}