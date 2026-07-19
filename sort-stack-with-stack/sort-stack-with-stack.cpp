#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;

    stack<int> st;
    stack<int> temp;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        st.push(x);
    }

    while (!st.empty()) {
        int current = st.top();
        st.pop();

        while (!temp.empty() && temp.top() > current) {
            st.push(temp.top());
            temp.pop();
        }

        temp.push(current);
    }

    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }

    return 0;
}