#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream out;
    out.open("RAM.txt");
    out<<"Krishna";
    out.close();
    return 0;
}