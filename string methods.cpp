#include<iostream>
#include<cstring>
#include<string>
#include<cctype>
int main(){
std::string s="Hi123"; 
std::cout<<strlen(s.c_str())<<" "<<(char)tolower('A')<<" "<<s.at(0); 
return 0;}