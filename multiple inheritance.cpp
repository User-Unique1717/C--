#include<iostream>
class Fly{public:void fly(){std::cout<<"fly";}};
class Swim{public:void swim(){std::cout<<"swim";}};
class Duck:public Fly,public Swim{};
int main(){Duck d;d.fly();return 0;}