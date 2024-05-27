#include<iostream>
using namespace std;
inline void fun(); // function declaration
int main(){
    cout<<"You are in main"<<endl;
    fun(); // function call
}
void fun(){ // function definition
    cout<<"You are in fun"<<endl;
}