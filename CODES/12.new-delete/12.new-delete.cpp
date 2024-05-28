#include<iostream>
using namespace std;
class complex{
    private:
        int a,b;
    public:
        void setData(int x, int y){
            a=x;
            b=y;
        }
    void Display(){
        cout<<"a= "<<a<<" b= "<<b;
    }
};
int main(){
    // Dynamic Memory Allocation
    complex *p=new complex;
    // for array
    complex *c=new complex[5];
    // Deleting(reasing) the memory blocks
    delete p;
    delete []c;
    return 0;
}