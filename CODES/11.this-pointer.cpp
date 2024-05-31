#include<iostream>
using namespace std;
class complex{
    private:
        int a,b;
    public:
        void setData(int a, int b){
            // this pointer: using for differentiate betwen instance variable and local variable of instence member function
            this->a=a;
            this->b=b;
        }
    void Display(){
        cout<<"a= "<<a<<" b= "<<b;
    }
};
int main(){
    complex c1;
    // colling from object
    c1.setData(6,7);
    c1.Display();
    // colling from object pointer
    complex *p;
    p=&c1;
    p->setData(8,9);
    cout<<endl;
    p->Display();
    return 0;
}