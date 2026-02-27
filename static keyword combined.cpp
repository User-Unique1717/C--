#include<iostream>
class Test{public:static int x;static void show(){std::cout<<x;}};
int Test::x=5;
int main(){Test::show();return 0;}