#include <bits/stdc++.h>
using namespace std;



int main(){
    int m,n;
      cin>>n>>m;
        int arr[n][m];
      for(int i=0;i<n;i++){
            for (int j =0; j<m; j++)
            {
                cin>>arr[i][j];
            }
            
      }
      //ordinary Traverse
      for(int i=0;i<n;i++){
            for (int j = 0; j<m; j++)
            {
                cout<<arr[i][j];
            }
            cout<<endl;
            
      }
      //spiral Traverse
    int row_st = 0,row_ed =n-1,col_st=0,col_ed=m-1;

    while(row_st <= row_ed && col_st <= col_ed)
    {
        for (int i = col_st; i <= col_ed; i++)
        {
            cout<<arr[row_st][i]<<" ";
        }
        row_st++;
        for (int i = row_st; i <= row_ed; i++)
        {
            cout<<arr[i][col_ed]<<" ";
        }
        col_ed--;
        for (int i = col_ed; i >= col_st; i--)
        {
            cout<<arr[row_ed][i]<<" ";
        }
        row_ed--;
        for (int i = row_ed; i >= row_st; i--)
        {
            cout<<arr[i][col_st]<<" ";
        }
        col_st++;    
    }
    return 0;
}