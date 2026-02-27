#include<iostream>
class Base{protected:int x=5;};
class Derived:public Base{public:void show(){std::cout<<x;}};
int main(){Derived d;d.show();return 0;}