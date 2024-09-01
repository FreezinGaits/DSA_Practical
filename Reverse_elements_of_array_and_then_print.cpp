#include<iostream>
using namespace std;
int main()
{
    int a[6], temp;
    cout<<"Name: Gautam Sharma"<<endl<< "Roll No.: 2329328"<<endl;
    cout << "Enter elements of array: ";
    for (int i = 0; i < 6; i++) {
    cin >> a[i];
    }
    for (int i=0,j=5-i;i<=j;i++,j--) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    cout << "Sorted array in descending order: ";
    for (int j = 0; j < 6; j++) {
        cout << a[j] << " ";
    }
    return 0;
}