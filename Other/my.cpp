#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char name[20];
    int cost;
    ofstream out("RAM1.txt");
    cout<<"Enter item name and cost: ";
    cin>>name;
    cin>>cost;
    out<<name;
    out<<cost;
    out.close();
    ifstream in("RAM1.txt");
    in>>name;
    in>>cost;
    cout<<"item name "<<name;
    cout<<"item cost "<<cost<<endl;
    in.close();
    return 0;
}