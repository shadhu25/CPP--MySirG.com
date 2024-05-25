#include<iostream>
using namespace std;
float area(int);
int area(int, int);
int main(){
    int r,l,b;
    cout<<"Enter the radius: ";
    cin>>r;
    cout<<"the area of circle is : "<<area(r)<<endl;
    cout<<"Enter the length and breath: ";
    cin>>l>>b;
    cout<<"the area of square is : "<<area(l,b)<<endl;
    return 0;
}
float area(int r){
    return (3.14*r);
}

int area(int x, int y){
    return (x*y);
}