#include<iostream>
using namespace std;
int main()
{
    int n=5, a[n], pos, x, i;
    cout<<"Name: Gautam Sharma"<<endl<< "Roll No.: 2329328"<<endl;
    cout<<"Enter the elements of the array: "<<endl;
    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the position where you wanna insert: "<<endl;
    cin>>pos;
    cout<<"Enter the element you want to insert: "<<endl;
    cin>>x;
    n = n+1;
    for (i = n-1; i >= pos; i--)
    {
        a[i] = a[i-1];
    }
    a[pos-1] = x;
    cout<<"Array after insertion: ";
    for ( i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}