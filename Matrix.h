//
// Created by mloginoff on 4/5/25.
//

#ifndef MATRIX_H
#define MATRIX_H
#if defined_cplusplus


class Matrix {
private:
    vector<stringMatrix> lines;
    int cols;
public:
    Matrix();

    Matrix addition(stringMatrix a, stringMatrix b);
    Matrix substraction(stringMatrix a, stringMatrix b);
    Matrix multiplication(stringMatrix a, int num);
    Matrix division(stringMatrix a, int num);
};


#endif //defined_cplusplus
#endif //MATRIX_H
