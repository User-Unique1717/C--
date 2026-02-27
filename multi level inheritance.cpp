#include<iostream>
class A{public:void show(){std::cout<<"A";}};
class B:public A{};
class C:public B{};
int main(){C c;c.show();return 0;}