// Created by mloginoff on 4/5/25.
//
#pragma once
#include <vector>

class stringMatrix {
private:
    std::vector<int> elements;
public:
    stringMatrix();

    stringMatrix operator+ (const stringMatrix& other);
    stringMatrix operator- (const stringMatrix& other);
    stringMatrix operator* (const int num);
    stringMatrix operator/ (const int num);
};

