//
// Created by mloginoff on 4/4/25.
//

#include <vector>

#ifndef MATRIX
#define MATRIX

class StringMatrix {
private:
  vector<int> elements;
public:
  StringMatrix();
  ~StringMatrix();

  StringMatrix operator + (const StringMatrix& other);
  StringMatrix operator - (const StringMatrix& other);
  StringMatrix operator * (const int num);
  StringMatrix operator / (const int num);

};

class Matrix {
private:
  vector<StringMatrix> lines;
  int rows;
public:
  Matrix();
  ~Matrix();

  Matrix addition(StringMatrix a, StringMatrix b);
  Matrix substraction(StringMatrix a, StringMatrix b);
  Matrix multiplication(StringMatrix a, int num);
  Matrix division(StringMatrix a, int num);

};

#endif //MATRIX