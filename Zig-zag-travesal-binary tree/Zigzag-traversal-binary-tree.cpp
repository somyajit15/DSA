#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

void zigzagTraversal(Node* root) {
    if (root == NULL)
        return;

    queue<Node*> q;
    q.push(root);
    bool leftToRight = true;

    while (!q.empty()) {
        int size = q.size();
        vector<int> level(size);

        for (int i = 0; i < size; i++) {
            Node* current = q.front();
            q.pop();

            int index = leftToRight ? i : size - 1 - i;
            level[index] = current->data;

            if (current->left)
                q.push(current->left);

            if (current->right)
                q.push(current->right);
        }

        for (int x : level)
            cout << x << " ";

        leftToRight = !leftToRight;
    }
}