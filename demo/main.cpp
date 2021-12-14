//Copyright by C++_developers1488

#include "check.hpp"
#include "_time.hpp"

int main() {
  std::vector <int64_t> size;

  long i=1;
  while (i > 0 and i != 0){
    std::cout << "Укажите размер буфера: ";
    std::cin >> i;
    if(i>0 and i != 0)
      size.push_back(i);
  }
  Time inv(_reverse, size);
  inv.print(std::cout);
}