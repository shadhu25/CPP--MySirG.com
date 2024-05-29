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
    complex add(complex c){
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
};
void complex:: display(){ // defining outside of member function
    cout<<a<<" "<<b<<endl;
    }
int main(){
    complex b1,b2,b3;
    b1.input();
    b2.input();
    b3=b1.add(b2);
    b3.display();
    return 0;
}


