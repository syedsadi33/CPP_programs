#include<bits/stdc++.h>
using namespace std;

string bin_2_dec(string bin){
    int dec=0,i,count=0;
    int len = bin.length();
    for(i=len-1;i>=0;i--){
        dec+=(int(bin[i])-48)* pow(2,count++);
        
    }
    return to_string(dec);
}

string dec_2_bin(int dec){
   
    if(dec<2) return to_string(dec);
    string str;
    str+=dec_2_bin(dec/2);
     str+= to_string(dec%2);
    return str;
}

int main(){
    int num;

    cin>>num;
    cout<<dec_2_bin(num);

    return 0;
    
}