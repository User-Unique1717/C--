#include<iostream>
class Calc{public:int mul(int x,int y){return x*y;}};
int main(){Calc c;std::cout<<c.mul(3,4);return 0;}