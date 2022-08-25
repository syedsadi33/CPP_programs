#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    char temp;
    int len=str.length(),i;
    for(i=0;i<(len/2);i++){
        temp = str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=temp;
    }
    cout<<str;
    return 0;
}