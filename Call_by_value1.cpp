#include<iostream>
using namespace std;
void swap(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout<<"Numbers after swapping: "<<x<<" , "<<y<<endl;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Numbers before swapping: "<<a<<" , "<<b<<endl;
    swap(a, b);  // Call by value to swap values of a and b
    return 0;
}