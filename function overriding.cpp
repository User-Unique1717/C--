#include<iostream>
class Parent{public:virtual void show(){std::cout<<"Parent";}};
class Child:public Parent{public:void show(){std::cout<<"Child";}};
int main(){Child c;c.show();return 0;}