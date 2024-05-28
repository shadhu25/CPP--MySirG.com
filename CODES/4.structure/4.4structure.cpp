#include<iostream>
using namespace std;
struct book{
    int bookid;
    char title[20];
    float price;
    void input(){
    cout<<"Enter the all details of book : ";
    cin>>bookid>>title>>price;
    }
    void display(){
    cout<<bookid<<" "<<title<<" "<<price<<endl;
    }
};
int main(){
    book b1;
    b1.input();
    b1.display();
    return 0;
}


