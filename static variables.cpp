#include<iostream>
class Counter{public:static int count;Counter(){count++;}int get(){return count;}};
int Counter::count=0;
int main(){Counter c1,c2;std::cout<<c2.get();return 0;}