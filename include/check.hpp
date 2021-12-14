//Copyright by sometosome

#ifndef INCLUDE_CHECK_HPP_
#define INCLUDE_CHECK_HPP_

#include <chrono>
#include <ostream>
#include <sstream>
#include <string>


std::string Byte_value(int64_t  value);

enum Check_type {
  _reverse,
  _random,
  _forward,
   };

std::string to_string(Check_type type);

class Check {
 public:
    int id;
    long size;
    int time;
    Check_type type;
    Check(int id, Check_type type, long size);
    char* initArray();
    int run();
    void _random(char* arr, char& k);
    void _forward(char* arr, char& k);
    void _reverse(char* arr, char& k);
    void print(std::ostream& os);
};

#endif // INCLUDE_CHECK_HPP_
