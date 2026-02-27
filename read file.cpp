#include<fstream>
#include<iostream>
#include<string>
int main(){std::ifstream file("test.txt");std::string s;getline(file,s);std::cout<<s;return 0;}