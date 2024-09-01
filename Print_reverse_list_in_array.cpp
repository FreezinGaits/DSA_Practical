#include <iostream>
using namespace std;

int main() {
    const int maxSize = 100; // Maximum size of the array
    int arr[maxSize];
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Array in reverse order: ";
    for (int i = n - 1; i >= 0; --i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
