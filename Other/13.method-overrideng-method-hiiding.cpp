#include<iostream>
using namespace std;
class car{
    int gear;
    public:
        void shiftGear(){ 
            cout<<"old version"<<endl;
        }
        void fun(){ }
};

class sportCar{
    int braek;
    public:
        void shiftGrear(){ // method overriding
            cout<<"new version"<<endl;
        }
        void fun(int x){ } // method hiding
};

int main(){
    sportCar s1;
    s1.shiftGrear(); // class sportcar
    car s;
    s.shiftGear(); // class car
    s1.fun(); // give error because of method hiding
    s1.fun(5);
    return 0;
}