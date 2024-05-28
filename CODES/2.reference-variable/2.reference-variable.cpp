#include<iostream>
using namespace std;
int main(){
    int a=7;
    int &v=a; // raference variable
    printf("%d\n",a);
    v=55;
    printf("%d\n",v);
    return 0;
}