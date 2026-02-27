#include<iostream>
class Shape{protected:int area;public:void set(int a){area=a;}
void display(){std::cout<<area;}};
int main(){Shape s;s.set(100);s.display();return 0;}