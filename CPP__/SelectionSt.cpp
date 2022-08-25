#include<bits/stdc++.h>
using namespace std;


int SelectionSort(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j=i+1; j < n; j++)
        {
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        
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
    SelectionSort(arr,n);

    return 0;

}