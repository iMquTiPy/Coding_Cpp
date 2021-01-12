/******************
Following Node class and main already created internally. You can directly use that.

#include<iostream>
using namespace std;

class Node {
    public :
    int data;
    Node *next;
    
    Node(int data) {
        this -> data = data;
        next = NULL;
    }
};

#include "Stack.h"
int main() {
    
    Stack st;
    
    int choice;
    cin >> choice;
    int input;
    
    while (choice !=-1) {
        if(choice == 1) {
            cin >> input;
            st.push(input);
        }
        else if(choice == 2) {
            int ans = st.pop();
            if(ans != 0) {
                cout << ans << endl;
            }
            else {
                cout << "-1" << endl;
            }
        }
        else if(choice == 3) {
            int ans = st.top();
            if(ans != 0) {
                cout << ans << endl;
            }
            else {
                cout << "-1" << endl;
            }
        }
        else if(choice == 4) {
            cout << st.getSize() << endl;
        }
        else if(choice == 5) {
            cout << st.isEmpty() << endl;
        }
        cin >> choice;
    }
    
}
***********/

class Stack {
    Node *head;
    int size;		// number of elements prsent in stack
    
    public :
    
    Stack() 
    {
        size=0;
        head=nullptr;
     }
    
    int getSize()
    {
       return size; 
    }
    
    bool isEmpty() {
    if(top==nullptr)
        return true;
    }
    
    void push(int element)
    {         
    Node *newNode= new Node(element);
        newNode->next=head;
        head=newNode;
        size++;
        

    }
    
    int pop() 
    { Node *temp=new Node(element);
     temp=head;
     ans=temp->data;
     head=head->next;
     delete temp;
     size--;
     return ans;
        
        // Return 0 if stack is empty. Don't display any other message
        
    }
    
    int top() {
        // Return 0 if stack is empty. Don't display any other message
        return head->data;
        
    }
    
    
    
};
