//Copyright by sometosome

#ifndef INCLUDE__TIME_HPP_
#define INCLUDE__TIME_HPP_

#include <iostream>
#include <random>
#include <vector>
#include <string>

#include "check.hpp"

using std::string;

using std::vector;

struct Time {
 public:
  void print(std::ostream& os);
  Check_type type;
  std::vector<Check> experiments;
  Time(Check_type type, std::vector<int64_t>& sizes);
};


#endif // INCLUDE__TIME_HPP_
