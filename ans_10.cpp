#include<bits/stdc++.h>
using namespace std;


class Node {
public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next = nullptr;
    }
};

class Stack : public Node {
public:
    Stack() : Node(0) {}
    Node* top = nullptr;

    void push(int value) {
        Node* newnode = new Node(value);
        newnode->next = top;
        top = newnode;
    }
    
    void pop() {
        if (top == nullptr) {
            cout<<"stack is empty"<<endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    void display() {
        Node* current = top;
        while (current) {
            cout<<current->data<<" ";
            current = current->next;
        }
        cout<<endl;
    }
};

class Queue : public Node {
public:
    Queue() : Node(0) {}
    Node* front = nullptr;
    Node* back = nullptr;

    void push(int value){
        Node* newnode = new Node(value);
        if (back == nullptr) {
            front = back = newnode;
            return;
        }
        back->next = newnode;
        back = newnode; 
    }
    
    void pop(){
        if (front == nullptr) {
            cout<<"queue is empty";
            return;
        }
        Node* temp = front;
        front = front->next;
        if (front == nullptr) {
            back = nullptr;
        }
        delete temp;
    }

    void display() {
        Node* current = front;
        while (current) {
            cout<<current->data<<" ";
            current = current->next;
        }
        cout<<endl;
    }
};

int main(){
    
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.display();
    stack.pop();
    stack.display();
    cout<<endl;
    Queue queue;
    queue.push(10);
    queue.push(20);
    queue.push(30);
    queue.display();
    queue.pop();
    queue.display();
    
    
    return 0;
}
