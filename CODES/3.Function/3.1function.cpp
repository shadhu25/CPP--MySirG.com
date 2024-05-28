#include<iostream>
using namespace std;
int sum(int, int);
int main(){
    int a,b;
    cout<<"Enter any two integers: ";
    cin>>a>>b;
    cout<<sum(a,b)<<endl;
    return 0;
}

int sum(int x, int y){
    return (x+y);
}