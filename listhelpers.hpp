/** listhelpers.hpp
 * This file has been provided as starter code by the instructor.
 * It implements methods that mimic the AP CSP List procedures.
 */

#ifndef _LISTHELPERS_HPP_
#define _LISTHELPERS_HPP_

#include <iostream>
#include <stdexcept>
#include <vector>

template <typename T>
void display(std::vector<T> const &v) {
  if (v.empty()) {
    std::cout << "[]\n";
  } else {
    std::cout << "[";
    for (int i = 0; i < v.size()-1; ++i) {
      std::cout << v.at(i) << ", ";
    }
    std::cout << v.back() << "]\n";
  }
}

template <typename T>
void append(std::vector<T> &v, T const &val) {
  v.push_back(val);
}

template <typename T>
void append(std::vector<T> &v, const char *str) {
    append(v, std::string(str));
}

template <typename T>
void insert(std::vector<T> &v, int const i, T const &val) {
  if (i < 0 || i > v.size()) {
    throw std::out_of_range("Index " + std::to_string(i) + " is out of bounds for the list INSERT procedure");
  }
  v.insert(v.begin()+i, val);
}

template <typename T>
void remove(std::vector<T> &v, int const i) {
  if (i < 0 || i >= v.size()) {
    throw std::out_of_range("Index " + std::to_string(i) + " is out of bounds for the list REMOVE procedure");
  }
  v.erase(v.begin()+i);
}

template <typename T>
int length(std::vector<T> const &v) {
  return v.size();
}

#endif  // #ifndef _LISTHELPERS_HPP_
