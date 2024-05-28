// when formal arguments are Pointer variables, it is function call by address.

#include<iostream>
    using namespace std;
    int sum(int *, int *);
    int main(){
        int a=5,b=6;
        int s=sum(&a,&b); // a and b are actual arguments
        cout<<"sum is "<<s<<endl;
        return 0;
    }
    int sum(int *x, int *y){  // x and y are formal arguments
        return (*x+*y);
    }