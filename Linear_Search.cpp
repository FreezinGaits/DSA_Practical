#include<iostream>
using namespace std;
int main()
{
    int a[5], element, loc = -1;
    cout<<"Name: Gautam Sharma"<<endl<< "Roll No.: 2329328"<<endl;
    cout << "Enter elements of an array: ";
    for (int i = 0; i < 5; i++)
        cin >> a[i];
    int i = 0;
    cout << "Enter the element to search: ";
    cin >> element;
    while( loc == -1 && i<5) {
        if( a[i] == element)
        loc = i;
        i++;
    }
    if( loc == -1)
    cout << "Element not found in the array.";
    else
    cout << "Element found at index " << loc;
    return 0;
}