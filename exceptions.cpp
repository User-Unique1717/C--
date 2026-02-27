#include<iostream>
int main(){try{throw 10;}catch(int e){std::cout<<e;}return 0;}