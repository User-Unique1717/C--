#include<iostream>
class Bank{private:int balance=1000;public:void deposit(int x){balance+=x;}int get(){return balance;}};
int main(){Bank b;b.deposit(500);std::cout<<b.get();return 0;}