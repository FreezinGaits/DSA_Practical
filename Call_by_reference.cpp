#include<iostream>
using namespace std;
void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a,b;
    cout<<"Name: Gautam Sharma"<<endl<< "Roll No.: 2329328"<<endl;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Numbers before swapping: "<<a<<" , "<<b<<endl;
    swap(&a, &b);  // Call by reference to swap values of a and b
    cout<<"Numbers after swapping: "<<a<<" , "<<b<<endl;
    return 0;
}