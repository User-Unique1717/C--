#include<iostream>
class Math{public:static int add(int a,int b){return a+b;}};
int main(){std::cout<<Math::add(2,3);return 0;}