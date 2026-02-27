#include<iostream>
class Animal{public:void eat(){std::cout<<"eating";}};
class Dog:public Animal{};
int main(){Dog d;d.eat();return 0;}