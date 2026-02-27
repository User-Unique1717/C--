#include<iostream>
class Printable{public:virtual void print()=0;};
class Document:public Printable{public:void print(){std::cout<<"Doc";}};
int main(){Document d;d.print();return 0;}