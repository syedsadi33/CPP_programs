#include<bits/stdc++.h>
using namespace std;

int t_o_h(int n,char src,char dest,char helper)
{
    if(n==0){
        return 0;
    }
    t_o_h(n-1,src,helper,dest);
    cout<<"disk number "<<n<<" is moved from "<<src<<" to "<<dest<<endl;
    t_o_h(n-1,helper,dest,src);
}


int main(){
    
    int n;
    cin>>n;

    t_o_h(n,'A','C','B');
    return 0;

}