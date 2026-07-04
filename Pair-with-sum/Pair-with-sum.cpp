#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    unordered_set<int> s;

    for (int i = 0; i < n; i++) {
        int need = k - arr[i];

        if (s.find(need) != s.end()) {
            cout << "Yes";
            return 0;
        }

        s.insert(arr[i]);
    }

    cout << "No";

    return 0;
}