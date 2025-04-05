
#include <iostream>
#include <vector>

#include "stringMatrix.h"
stringMatrix::stringMatrix() {

}

stringMatrix stringMatrix::operator+(const stringMatrix& other) const {
  stringMatrix result;
  result.elements.reserve(elements.size());
  for (int i = 0; i < other.size(); i++) {
    result.elements.push_back(this->elements.at(i) + other.elements.at(i));
  }
  return result;
}

stringMatrix stringMatrix::operator-(const stringMatrix& other) const {
  stringMatrix result;
  result.elements.reserve(elements.size());
  for (int i = 0; i < other.size(); i++) {
    result.elements.push_back(this->elements.at(i) - other.elements.at(i));
  }
  return result;
}

stringMatrix stringMatrix::operator*(const double num) const {
  stringMatrix result;
  result.elements.reserve(elements.size());
  for (int i = 0; i < size(); i++) {
    result.elements.push_back(this->elements.at(i) * num);
  }
  return result;
}

stringMatrix stringMatrix::operator/(const double num) const {
  stringMatrix result;
  result.elements.reserve(elements.size());
  for (int i = 0; i < size(); i++) {
    result.elements.push_back(this->elements.at(i) / num);
  }
  return result;
}