#include<iostream>
class A{public:virtual void call(){std::cout<<"A";}};
class B:public A{public:void call(){std::cout<<"B";}};
int main(){A* ptr=new B();ptr->call();return 0;}