#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(){  // Default constructor
        printf("Hari Narayan\n");
        a=0; b=0;
    }
    complex(int k){ // parameterized constructor
        int a=k;
    }
    complex(int x,int y){ // parameterized constructor
        a=x; b=y;
    }
    complex(complex &c){ // copy constructor
        a=c.a;
        b=c.b;
    }
    void showData(){
        cout<<a<<endl<<b<<endl;
    }
    ~complex(){
        printf("Hari Narayan\n");
    }
};
int main(){
    complex c1,c2(4),c3(3,5);
    complex c6(c1);
    c6.showData();
    return 0;
}