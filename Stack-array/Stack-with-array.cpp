#include <iostream>
using namespace std;

const int MAX = 100;

int stackArr[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        cout << "Stack Overflow" << endl;
        return;
    }

    top++;
    stackArr[top] = value;
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow" << endl;
        return;
    }

    top--;
}

void peek() {
    if (top == -1) {
        cout << "Stack is Empty" << endl;
    } else {
        cout << stackArr[top] << endl;
    }
}

void display() {
    if (top == -1) {
        cout << "Stack is Empty" << endl;
        return;
    }

    for (int i = top; i >= 0; i--) {
        cout << stackArr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    while (n--) {
        int choice;
        cin >> choice;

        if (choice == 1) {
            int x;
            cin >> x;
            push(x);
        }
        else if (choice == 2) {
            pop();
        }
        else if (choice == 3) {
            peek();
        }
        else if (choice == 4) {
            display();
        }
    }

    return 0;
}