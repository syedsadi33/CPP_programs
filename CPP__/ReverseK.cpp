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

void insert_at_head(node* &head,int val){
    node* n = new node(val);
    if(head == NULL){
        head=n;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void display(node* head){
    if(head == NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    do{
        cout<<head->data<<" ";
        head=head->next;
    }while(head != NULL);
}

void reverse(node* &head){

    node* prev = NULL;
    node* curr = head;
    node* next;
    while(curr != NULL){
        next = curr->next;
        curr->next=prev;
        prev = curr;
        curr = next;

    }
    head = prev;
}



int main(){
    node* head = NULL;

    insert_at_head(head,1);
    insert_at_head(head,2);
    insert_at_head(head,3);
    // display(head);
    reverse(head);
    display(head);


    return 0;
}