#include<iostream>
using namespace std;
int sum(int, int, int=0); // Default Argument
int main(){
    int a,b,c;
    cout<<"Enter any two integers: ";
    cin>>a>>b;
    cout<<"sum is : "<<sum(a,b)<<endl;
    cout<<"Enter any three integers: ";
    cin>>a>>b>>c;
    cout<<"sum is : "<<sum(a,b,c)<<endl;
    return 0;
}
int sum(int x, int y, int z){
    return (x+y+z);
}