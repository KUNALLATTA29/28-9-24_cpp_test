#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class LinkedList{
    
    Node* head;
    
    public:
        LinkedList(){
            head = NULL;
        }
        
        void insertAtHead(int value){
            Node* newnode = new Node();
            newnode->data = value;
            newnode->next = head;
            head = newnode;
        }
        
        void insertAtTail(int value){
            Node* newnode = new Node();
            newnode->data = value;
            newnode->next = NULL;
            
            if(!head){
                head = newnode;
                return;
            }
            
            Node* temp = head;
            while(temp->next){
                temp = temp->next;
            }
            
            temp->next = newnode;
            
        }
        
     
        void display(){
            if(!head){
                cout<<"list is empty";
            }
            
            Node* temp = head;
            while(temp){
                cout<<temp->data<<"->";
                temp = temp->next;
            }
            cout<<" null";
        }
};

int main(){
    
    LinkedList list;
    
    list.insertAtTail(2);
    list.insertAtHead(4);
    list.insertAtHead(4);
    list.display();
}
