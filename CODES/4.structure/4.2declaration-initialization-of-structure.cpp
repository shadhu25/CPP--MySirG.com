#include<iostream>
#include<string.h>
using namespace std;
struct Book{
    int bookid;
    char title[20];
    float price;
};
int main(){
    Book B1={101,"my sirG C++",202.35};
    Book B2;
    B2.bookid=102;
    B2.price=202.0;
    strcpy(B2.title,"C++ in depth");
    cout<<B2.bookid<<endl<<B2.price<<endl<<B2.title<<endl;
    return 0;
}