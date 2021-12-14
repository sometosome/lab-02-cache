//Copyright by sometosome

#ifndef INCLUDE__TIME_HPP_
#define INCLUDE__TIME_HPP_

#include <iostream>
#include <random>
#include <vector>

#include "check.hpp"

struct Time {
 public:
  void print(std::ostream& os);
  Check_type type;
  std::vector<Check> experiments;
  Time(Check_type type, std::vector<long>& sizes);
};


#endif // INCLUDE__TIME_HPP_
