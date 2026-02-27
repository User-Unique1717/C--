#include<iostream>
class Animal{public:virtual void sound()=0;};
class Dog:public Animal{public:void sound(){std::cout<<"Woof";}};
int main(){Dog d;d.sound();return 0;}