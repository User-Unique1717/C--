#include<iostream>
class Shape{public:virtual void draw()=0;};
class Circle:public Shape{public:void draw(){std::cout<<"Circle";}};
int main(){Circle c;c.draw();return 0;}