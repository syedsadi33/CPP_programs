#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    
    node(int val){
        data = val;
        next = NULL;
    }
};
void display(node* head){
    while(head->next!=NULL){
        cout<<head.da
    }
}

void Insert_at_tail(node* &head,int val){
    node* n = new node(val);
    if(head == NULL)
    {
        head=n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next = n;

}

void deletion(node* &head,int key){
    node* temp = head;
    while(temp->next->data == key){
        temp=temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;

}


int main(){

    node* head =NULL;
    Insert_at_tail(head,1);
    return 0;

}