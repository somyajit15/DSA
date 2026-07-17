#include <iostream>
#include <queue>
using namespace std;

int main() {
    string s;
    cin >> s;

    queue<char> q;
    int freq[26] = {0};

    for (char ch : s) {
        freq[ch - 'a']++;
        q.push(ch);

        while (!q.empty() && freq[q.front() - 'a'] > 1) {
            q.pop();
        }

        if (q.empty())
            cout << "#";
        else
            cout << q.front();
    }

    return 0;
}