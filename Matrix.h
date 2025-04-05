//
// Created by mloginoff on 4/5/25.
//

#ifndef MATRIX_H
#define MATRIX_H
#if defined_cplusplus


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


#endif //defined_cplusplus
#endif //MATRIX_H
