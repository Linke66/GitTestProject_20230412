#include <iostream>

#include "add.h"

int main(){
 // std::cout << "##**" << std::endl;
  std::cout << "second person message" << std::endl;
  std::cout << "first person message" << std::endl;
  int a, b;
  std::cout << "Please enter the first number:";
  std::cin >> a;

  std::cout << "Please enter the second number:";
  std::cin >> b;

  std::cout << "The result of adding two numbers is:" << MyAdd(a, b) << std::endl;
  std::cout << "hello world" << std::endl;

  return 0;
}
