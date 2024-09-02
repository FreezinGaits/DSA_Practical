#include <iostream>
using namespace std;

int binarySearch(int a[], int n, int element) {
    int start = 0;
    int end = n - 1; // Corrected the end index
    while (start <= end) { // Changed the condition to handle the case when start == end
        int mid = start + (end - start) / 2; // Avoid integer overflow
        if (a[mid] == element) {
            return mid;
        }
        else if (a[mid] > element) { // Changed >= to >
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    return -1; // Element not found
}

int main() {
    cout<<"Name: Gautam Sharma"<<endl<< "Roll No.: 2329328"<<endl;
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int a[n]; // Declare the array after getting its size
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int element;
    cout << "Enter the element to search: ";
    cin >> element;
    int result = binarySearch(a, n, element);
    if (result != -1) {
        cout << "The location of that element is: " << result << endl;
    }
    else {
        cout << "Element not found." << endl;
    }
    return 0;
}
