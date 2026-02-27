#include<iostream>
class Num{public:int x;int getThis(){return this->x=10;}};
int main(){Num n;std::cout<<n.getThis();return 0;}