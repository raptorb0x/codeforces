#include <regex>
#include <string>
#include <iostream>


int main(){

  std::string s ("xaxababababaxax");
  std::smatch m;
  std::regex e ("(.+)\\1\\1+");

   while (std::regex_search (s,m,e)) {
    for (auto x:m) std::cout << x << " ";
    std::cout << std::endl;
    s = m.suffix().str();
  }

  return 0;
}
