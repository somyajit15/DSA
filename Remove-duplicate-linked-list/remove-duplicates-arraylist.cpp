#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

void removeDuplicates(Node* head) {
    Node* temp = head;

    while (temp != NULL && temp->next != NULL) {
        if (temp->data == temp->next->data) {
            Node* duplicate = temp->next;
            temp->next = duplicate->next;
            delete duplicate;
        } else {
            temp = temp->next;
        }
    }
}

void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    int n;
    cin >> n;

    if (n == 0)
        return 0;

    int x;
    cin >> x;
    Node* head = new Node(x);
    Node* tail = head;

    for (int i = 1; i < n; i++) {
        cin >> x;
        tail->next = new Node(x);
        tail = tail->next;
    }

    removeDuplicates(head);
    printList(head);

    return 0;
}