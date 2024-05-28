// class temmplate
#include<iostream>
using namespace std;
template <class X> class ArrayList{ // class template
    struct arrayData{
        int capacity;
        X *array;
    };
    arrayData *arrD1;
    public:
    ArrayList(int x){
        arrD1= new arrayData;
        arrD1->capacity=x;
        arrD1->array= new X[x];
    }
    void addElement(int index, X data){
        if(index>=0 && index<=arrD1->capacity-1)
            arrD1->array[index]=data;
        else
            cout<<"Invalid index number\n";
    }
    X viewElement(int index){
        if(index>=0 && index<=arrD1->capacity-1)
            return arrD1->array[index];
        else{
            cout<<"Invalid index number\n";
            return -1;
            }
    }
    void viewList(){
        for(int i=0;i<arrD1->capacity;i++)
            cout<<arrD1->array[i]<<" ";
        cout<<endl;
    }

};

int main(){
    ArrayList <float>list1(5);
    float data;
    list1.addElement(0,1.4);
    list1.addElement(1,2.5);
    list1.addElement(2,3.6);
    list1.addElement(3,4.7);
    list1.addElement(4,5.8);
    data=list1.viewElement(5);
    cout<<data<<endl;
    list1.viewList();
}