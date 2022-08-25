#include <bits/stdc++.h>
using namespace std;


int BinarySearch(int arr[],int n,int elem){
	int l=0,u=n;
	while(l<=u){
		int mid = (l+u)/2;
		cout<<"dfdfd"<<mid;
		if(arr[mid] == elem){
			return mid;
		}
		else if(arr[mid]>elem){
			u=mid-1;
		}
		else {l=mid+1;}

	}
	 return -1;
}

int main()
{	
	int n,elem;
	cout<<"enter the length of array :"<<endl;
	cin>>n;
	cout<<"enter the element to search :"<<endl;
	cin>>elem;
	int arr[n];
	cout<<"enter the elements of array :"<<endl;

	for(int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	cout<< "the element is found at the index " <<BinarySearch(arr,n,elem);
	
	return 0;
	
}






