#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    unordered_set<int> s;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        s.insert(arr[i]);
    }

    int longest = 0;

    for (int i = 0; i < n; i++) {
        if (s.find(arr[i] - 1) == s.end()) {
            int current = arr[i];
            int length = 1;

            while (s.find(current + 1) != s.end()) {
                current++;
                length++;
            }

            if (length > longest) {
                longest = length;
            }
        }
    }

    cout << longest;

    return 0;
}