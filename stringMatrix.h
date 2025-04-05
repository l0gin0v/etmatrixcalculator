// Created by mloginoff on 4/5/25.
//

#ifndef STRINGMATRIX_H
#define STRINGMATRIX_H

#include <iostream>
#include <vector>

class stringMatrix {
private:
    vector<double> elements;
public:
    stringMatrix();

    stringMatrix operator+(const stringMatrix& other) const;
    stringMatrix operator-(const stringMatrix& other) const;
    stringMatrix operator*(const double num) const;
    stringMatrix operator/(const double num) const;

    int size() const { return elements.size(); }
    const std::vector<double>& getElements() const { return elements; }
    void push_back(double num) { elements.push_back(num); }
};

#endif // STRINGMATRIX_H