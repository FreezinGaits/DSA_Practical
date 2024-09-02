#include <iostream>
using namespace std;

int main() {
    cout<<"Name: Gautam Sharma"<<endl<< "Roll No.: 2329328"<<endl;
    const int maxSize = 100; // Maximum size of the array
    int arr[maxSize];
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int smallest = arr[0]; // Assume the first element is the smallest

    for (int i = 1; i < n; ++i) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << "The smallest element in the array is: " << smallest << endl;

    return 0;
}