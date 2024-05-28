#include<iostream>
using namespace std;
struct book{
    private:
    int bookid;
    char title[20];
    float price;
    public:
    void input(){
    cout<<"Enter the all details of book : ";
    cin>>bookid>>title>>price;
    if(bookid<0)
        bookid=-bookid;
    if(price<0)
        price=-price;
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


