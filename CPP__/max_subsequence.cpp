#include<bits/stdc++.h>
using namespace std;

int lcss(string x,string y,int m,int n){
    if(m==0 || n==0)return 0;
    if(x[m-1] == y[n-1]){
        return 1 + lcss(x,y,m-1,n-1);
    }
    else 
    return max(lcss(x,y,m,n-1),lcss(x,y,m-1,n));  
}

int main(){
    string s1 = "abcdef";
    string s2 = "abefgg";

    int m = s1.length();
    int n = s2.length();
    cout<<lcss(s1,s2,m,n);
    return 0;
}