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

void Insert_at_head(node* &head,int val){
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
void insertHead(node* &head,int val){
    node* n = new node(val);
    n->next = head;
    head=n;
}

void search(node* head,int key){
    while(head->next!=NULL){
        if(head->data == key){
            cout<<"key found"<<endl;
            return;
        }
        head=head->next;
    }
    cout<<"key not found ";
}

void display(node* head){

    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void deletion(node* &head,int key){

    node* temp =head;
    node* prev = NULL;

    while(temp->next!=NULL){
        if(temp->data == key){
            temp->next = head;
            return;
        }
        if(temp->data == key){
            prev->next=temp->next;
            temp->next=0;
            return;
        }
        prev=temp;
        temp=temp->next;
    }

}

void remdupp(node* head){
    node* prev = head;
    node* curr = head->next;
    while(curr != NULL){
        
        if(prev->data == curr->data){
            node* del = curr;
            curr = curr->next;
            prev->next=curr;
            delete del;

        }
        else{
        prev = curr;
        curr=curr->next;
        }
    }

}
void makeCycle(node* head,int val){
    node* temp = head;
    int cnt=0;
    node* nn = NULL;
    while(temp->next != NULL){
        if(cnt ==  val){
            nn=temp;
        }
        cnt++;
        temp=temp->next;
        
    }
    temp->next=nn;
}

int main(){

    node* head = NULL;
    Insert_at_head(head,2);
    Insert_at_head(head,3);
    Insert_at_head(head,3);
    Insert_at_head(head,3);
    Insert_at_head(head,4);
    Insert_at_head(head,4);
    insertHead(head,1);
    insertHead(head,0);
    makeCycle(head,3);
    display(head);
    cout<<endl;
    
    return 0;
}