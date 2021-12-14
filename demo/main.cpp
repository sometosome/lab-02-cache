//Copyright by C++_developers1488

#include "check.h"
#include "time.h"

int main() {
  std::vector <int64_t> size;

  long i=1;
  while (i > 0 and i != 0){
    std::cout << "Укажите размер буфера: ";
    std::cin >> i;
    if(i>0 and i != 0)
      size.push_back(i);
  }
  time inv(_reverse, size);
  inv.print(std::cout);
}