//in collections of nodes: each node has:data and(&) link(address);  #link got: Data & link and so on until there is null at link part;
//type: single,double,circular linked list
// it's linear data structure, it's best thing is: insertion and deletion;
//#insertion : adding anew node at the specified positionin th4e list. 
//types: 1;front of linked list, before given possii, after given possii, at posii, at the end of linked list
#include <iostream>
using namespace std;
class Node(){
public:
    int data'
    Node* next;
    Node(int x){
        data=x;
        next=nullptr;
    }

};

Node* insertAtFront(Node* head,int x){
    Node* newNode=new Node(x);
    newNode->next=head;
    return newNode;

}
void printList(Node* head){
    Node* curr=head;
    while(curr!=nullptr){
        cout<<curr->data;
    }
    if(curr->next!=nullptr){
        cout<<"->";
    }
    curr=curr->next;
    cout<<""<<endl;
}


int main(){
    Node* head=new Node(2);
    head->next=new Node(3);
    head->next->next=new Node(4);
    head->next->next->next=new Node(5);
    int x=1;
    
}
