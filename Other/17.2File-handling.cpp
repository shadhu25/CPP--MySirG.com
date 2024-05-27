#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream in;
    char ch;
    in.open("RAM.txt");
    //this piece of code ignore white-space
    /* in>>ch;
    while(!in.eof()){
        cout<<ch;
        in>>ch;
    }*/
    cout<<endl;

    ch=in.get();
    while(!in.eof()){
        cout<<ch;
        ch=in.get();
    }
    cout<<endl;
    in.close();
    return 0;
}