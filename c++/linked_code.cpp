#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to insert at position
void insertAtPosition(Node* &head, int value, int pos) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    // Case 1: Insert at beginning
    if(pos == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;

    // Traverse to (pos - 1) node
    for(int i = 1; i < pos - 1; i++) {
        if(temp == NULL) {
            cout << "Position out of range!" << endl;
            return;
        }
        temp = temp->next;
    }

    // If position is still invalid
    if(temp == NULL) {
        cout << "Position out of range!" << endl;
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void display(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;

    insertAtPosition(head, 10, 1);
    insertAtPosition(head, 20, 2);
    insertAtPosition(head, 30, 3);

    cout << "Initial List: ";
    display(head);

    // Insert on valid position
    insertAtPosition(head, 25, 3);
    cout << "After inserting 25 at position 3: ";
    display(head);

    //invalid position
    insertAtPosition(head, 50, 10);

    return 0;
}