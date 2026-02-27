#include<iostream>
class Test{public:~Test(){std::cout<<"Destructor";}};
int main(){Test t;return 0;}