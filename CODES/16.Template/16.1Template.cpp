// Function Template
#include<iostream>
using namespace std;
template <class Z> Z big(Z m, Z n){
    if(m>n)
        return m;
    else
        return n;
} 

template <class X, class Y> X big2(X a, Y b){
    if(a>b)
        return a;
    else
        return b;
}

int main(){
    cout<<big(2,55)<<endl;
    cout<<big(2.2,55.33)<<endl;
    cout<<big2(53.3,44)<<endl;
    cout<<big2(3,44)<<endl;
    return 0;

}