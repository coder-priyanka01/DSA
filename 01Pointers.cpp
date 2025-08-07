#include <iostream>
using namespace std;

int main() {
    int num = 5;
    cout <<num << endl;

    //address of opertor - &
    cout << "address of num: " << &num << endl;

    //pointer variable
    int *ptr = &num;
    cout << "value of ptr: " << *ptr << endl;

    double d = 4.3;
    double *p2 = &d;

    cout << "Address is : " << p2 << endl;
    cout << "Value is : " << *p2 << endl;

    cout <<"size of integer is "<<sizeof(&num)<<endl;
    cout <<"size of pointer is "<<sizeof(*ptr)<<endl;
    cout <<"size of pointer is "<<sizeof(*p2)<<endl;

    //pointer to int is created, and pointing to some garbage address
    //int *p = 0;
    //cout << "Garbage value of p: " << *p << endl; 
    
    
    /*int i = 10;
    int *p = &i;
    cout << "Value of i: " << *p << endl;

    int *q = &i;
    cout << "Value of i: " << *q << endl;
    cout << "Address of i: " << q << endl;

    int *p = 0;
    p = &i;

    cout <<p << endl;
    cout <<*p << endl;*/


    int a = num;
    cout << "before " << num << endl;
    a++;
    cout << "after " << num << endl;

    cout << "Value of num: " << num << endl;

    int *p = &num;
    cout << "before " << num << endl;
    (*p)++;
    cout << "after " << num << endl;

    //copy of pointer
    int *q = p;
    cout << p <<"-->" << q << endl;
    cout << *p << "-->" << *q << endl;

    //important concept
    int i = 10;
    int *t = &i;
    //cout << (*t)++ << endl; 
    *t = *t + 1; 
    cout<< *t << endl; 

    return 0;
}