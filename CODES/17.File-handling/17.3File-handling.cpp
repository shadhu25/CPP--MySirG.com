#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream file;
    char c;
    file.open("RAM.txt",ios::in|ios::out);
    file<<"hello world";
    c=file.get();
    while(!file.eof()){
        cout<<c;
        c=file.get();
    }
    cout<<endl;
    file.close();
}