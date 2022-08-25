#include<bits/stdc++.h>
using namespace std;

int InsertionSort(int arr[],int n){
    for (int i = 1; i < n; i++)
    {   
        int cur = arr[i],j=i-1;
        while(arr[j]>cur && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=cur;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
    
}

int main(){

    int n;
    cout<<"enter the length : ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"array  after sorting "<<endl;
    InsertionSort(arr,n);
    return 0;
}