//Copyright by sometosome

#ifndef INCLUDE_TIME_HPP_
#define INCLUDE_TIME_HPP_

#include <iostream>
#include <random>
#include <vector>

#include "Check.h"

using std::string;

using std::vector;

struct Time {
 public:
  void print(std::ostream& os);
  Check_type type;
  std::vector<Check> exper_iments;
  Time(Check_type type, std::vector<long>& sizes);
};


#endif // INCLUDE_TIME_HPP_