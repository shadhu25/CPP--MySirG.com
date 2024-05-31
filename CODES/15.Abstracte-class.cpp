// Abstract class
#include<iostream>
class Abstract{
    public:
        virtual void fun()=0; // do nothing function
        void fun1(){ }
};

class A: public Abstract{
    public:
    // if you inherit the abstract class then you must override the do-nothing function(fun()) or you must create do-nothing funtion name as parent class do-nothing function
    void fun(){ }
    void fun2(){ }
};