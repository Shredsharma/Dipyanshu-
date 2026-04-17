#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int value) {
        data = value;
        prev = NULL;
        next = NULL;
    }
};

void insertAtBeginning(Node* &head, int value) {
    Node* newNode = new Node(value);

    if(head != NULL) {
        head->prev = newNode;
        newNode->next = head;
    }
    head = newNode;
}

void insertAtEnd(Node* &head, int value) {
    Node* newNode = new Node(value);

    if(head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

void insertAtPosition(Node* &head, int value, int pos) {
    if(pos == 1) {
        insertAtBeginning(head, value);
        return;
    }

    Node* temp = head;
    for(int i = 1; i < pos-1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if(temp == NULL) return;

    Node* newNode = new Node(value);

    newNode->next = temp->next;
    newNode->prev = temp;

    if(temp->next != NULL)
        temp->next->prev = newNode;

    temp->next = newNode;
}

void deleteAtBeginning(Node* &head) {
    if(head == NULL) return;

    Node* temp = head;

    head = head->next;

    if(head != NULL)
        head->prev = NULL;

    delete temp;
}

void deleteAtEnd(Node* &head) {
    if(head == NULL) return;

    if(head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->prev->next = NULL;
    delete temp;
}

void deleteAtPosition(Node* &head, int pos) {
    if(head == NULL) return;

    if(pos == 1) {
        deleteAtBeginning(head);
        return;
    }

    Node* temp = head;
    for(int i = 1; i < pos && temp != NULL; i++) {
        temp = temp->next;
    }

    if(temp == NULL) return;

    if(temp->next != NULL)
        temp->next->prev = temp->prev;

    if(temp->prev != NULL)
        temp->prev->next = temp->next;

    delete temp;
}

void printList(Node* head) {
    while(head != NULL) {
        cout << head->data << " <-> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;
    int n, value, pos;

    cout << "Enter number of nodes: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Enter value: ";
        cin >> value;
        insertAtEnd(head, value);
    }

    cout << "\nInitial List: ";
    printList(head);

    cout << "\nEnter value to insert at beginning: ";
    cin >> value;
    insertAtBeginning(head, value);

    cout << "After insert at beginning: ";
    printList(head);

    cout << "Enter value and position to insert: ";
    cin >> value >> pos;
    insertAtPosition(head, value, pos);

    cout << "After insert at position: ";
    printList(head);

    deleteAtBeginning(head);
    cout << "\nAfter delete at beginning: ";
    printList(head);

    deleteAtEnd(head);
    cout << "After delete at end: ";
    printList(head);

    cout << "Enter position to delete: ";
    cin >> pos;
    deleteAtPosition(head, pos);

    cout << "After delete at position: ";
    printList(head);

    return 0;
}