#include<iostream>
using namespace std;
class complex{
    private:
    int a,b;
    public:
    void input(){
    cout<<"Enter the complex number : ";
    cin>>a>>b;
    }
    void display();
};
void complex:: display(){ // defining outside of member function
    cout<<a<<" "<<b<<endl;
    }
int main(){
    complex b1;
    b1.input();
    b1.display();
    return 0;
}


