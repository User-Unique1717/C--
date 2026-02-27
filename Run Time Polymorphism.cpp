#include<iostream>
class Base{public:virtual void show(){std::cout<<"Base";}};
class Derived:public Base{public:void show(){std::cout<<"Derived";}};
int main(){Base* b=new Derived();b->show();return 0;}