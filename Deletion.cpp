#include<iostream>
using namespace std;
int main()
{
    int n=5, a[n], i, pos, ele;
    cout<<"Name: Gautam Sharma"<<endl<< "Roll No.: 2329328"<<endl;
    cout<<"Enter the elements of the array: "<<endl;
    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the position you wanna delete: "<<endl;
    cin>>pos;
    ele = a[pos];
    for ( i = pos-1; i < n; i++)
    {
        a[i] = a[i+1];
    }
    n = n - 1;
    cout<<"Array after deletion: "<<endl;
    for ( i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
     return 0;  
}