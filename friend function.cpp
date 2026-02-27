#include<iostream>
class Box{private:int secret=42;public:friend void show(Box b);};
void show(Box b){std::cout<<b.secret;}
int main(){Box b;show(b);return 0;}