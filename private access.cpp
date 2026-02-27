#include<iostream>
class Safe{private:int secret=42;public:int get(){return secret;}};
int main(){Safe s;std::cout<<s.get();return 0;}