#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    // inpt array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // store frequency each element
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    //find first non-repeating element
    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] == 1) {
            cout << arr[i];
            return 0;
        }
    }

    cout << -1;

    return 0;
}