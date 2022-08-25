#include<bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[],int ele,int n){
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == ele){
            return i;
        }
    }
    return -1;
    

}

int main(){
       int n,ele;
       cout<<"enter the length of array : "<<endl;
       cin>>n;
       cout<<"enter the key to search : "<<endl;
       cin>>ele;
       int arr[n];
       cout<<"enter the elements : "<<endl;
       for (int i = 0; i < n; i++)
       {
        cin>>arr[i];
       }

       cout<<"the key is found at index : "<<LinearSearch(arr,ele,n);
       return 0;
       

}