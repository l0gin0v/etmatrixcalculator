#include "stringMatrix.h"

#include <vector>

stringMatrix stringMatrix::operator+ (const stringMatrix& other) {
  for (int i = 0; i < other.elements.size(); i++) {
    this->elements.at(i) += other.elements.at(i);
  }
  return *this;
}

stringMatrix stringMatrix::operator- (const stringMatrix& other) {
  for (int i = 0; i < other.elements.size(); i++) {
    this->elements.at(i) -= other.elements.at(i);
  }
  return *this;
}
stringMatrix stringMatrix::operator* (const int num) {
  for (int i = 0; i < elements.size(); i++) {
    this->elements.at(i) *= num;
  }
  return *this;
}
stringMatrix stringMatrix::operator/ (const int num) {
  for (int i = 0; i < elements.size(); i++) {
    this->elements.at(i) /= num;
  }
  return *this;
}