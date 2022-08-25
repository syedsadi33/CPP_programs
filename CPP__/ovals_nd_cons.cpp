#include<bits/stdc++.h>
using namespace std;

int main(){
    char c;
    cin>>c;
    if(!isalpha(c)){
        cout<<"is not an Alphabet";
        return 0;
    }
    char m =tolower(c);
    if(m == 'a' || m == 'e'|| m == 'i'||m == 'o'||m == 'u')
    {
         cout<<"is ovel";
    }
    else cout<<"is consonent";

    return 0;
}