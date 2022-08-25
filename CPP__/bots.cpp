#include<bits/stdc++.h>
using namespace std;

int cellprob(int cells){
     if(cells == 1)return 1;
     else if(cells%3 == 0)return (cells/3);
     else return cells/2;
}


int main(){

    int cells;
    cin>>cells;
    int ans=cellprob(cells);
    cout<<ans;
    return 0;
}