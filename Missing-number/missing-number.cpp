#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    int num;

    for (int i = 0; i < n - 1; i++) {
        cin >> num;
        sum += num;
    }

    int totalSum = n * (n + 1) / 2;

    cout << totalSum - sum;

    return 0;
}