#include<iostream>
using namespace std;
class account{
    private:
        int balance; // instance member variable
        static float roi; // static member variable or class variable
    public:
        void setBalance(int b){
            // it can access static member varibles and instance member function
            balance=b;
        }
        static void setRoi(float r){ // static member function or class function
            // it can ony access staic member variables
            roi=r;
        }
};
float account:: roi=3.5f; // initializing a static variable without any object using scope resolution operator
int main(){
    account a1;
    a1.setRoi(5.5f); // assing value in static member variable through a staic member function with a abject
    account::setRoi(6.44f); // assing value in static member variable through a staic member function without any abject

}