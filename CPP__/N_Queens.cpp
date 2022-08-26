#include<bits/stdc++.h>
using namespace std;


bool isSafe(int** board,int x,int y,int n){
    for (int i = 0; i<=n; i++)
    {
       if(board[i][y])return false;
    }
    int r=x;
    int c=y;
    while(r>=0 && c>=0){
        if(board[r][c])return false;
        r--,c--;
    }
    r=x;
    c=y;
    while(r>=0 && c<n){
        if(board[r][c])return false;
        r--,c++;
    }
    return true;
}

bool Q_yard(int x,int n,int** board){
   if(x>=n){
    return true;
   }
    for(int col=0;col<n;col++){
        if(isSafe(board,x,col,n)){
            board[x][col]=1;

            if(Q_yard(x+1,n,board)){
                return true;
            }
            board[x][col]=0;
        }
    }

    return false;
}
int main(){
    int n;
    cin>>n;
    if(n<4){
        cout<<"There is now possibilities to place Queens less than 4 in board in a board < 4x4 such that they dont attack each other";
        return 0;
    }
    int** Board = new int*[n];
    for(int i=0;i<=n;i++){
        Board[i] = new int[n];
         for(int j=0;j<n;j++){
        Board[i][j]=0;
    }
    }

    Q_yard(0,n,Board);

    for(int i=0;i<n;i++,cout<<'\n'){
    for(int j=0;j<n;j++){
        cout<<Board[i][j]<<" ";
    }
    }

    return 0;
}