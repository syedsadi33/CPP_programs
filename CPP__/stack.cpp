#include<bits/stdc++.h>
using namespace std;
#define n 2
class stackk{
    int* arr;
    public:
    int top;
    stackk(){
        arr= new int[n];
        top=-1;
    }
    void push(int val){
        if(top == n-1){
             cout<<"stack is overflowed"<<endl;
            return;
        }
       
        top++;
        arr[top]=val;
    }
    void pop(){
        if(top == -1){
            cout<<"stack is empty"<<endl;
            return;
        }
        top--;
    }
    int Top(){
        return arr[top];
    }
    bool isempty(){
        
         return top==-1;
    }

};
int main(){
    stackk st;
    st.push(0);
    st.push(1);
    st.push(2);
    
   
    


    return 0;
}