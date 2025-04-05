//
// Created by mloginoff on 4/5/25.
//

#ifndef STRINGMATRIX_H
#define STRINGMATRIX_H
#if defined_cplusplus

class stringMatrix {
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


#endif //defined_cplusplus
#endif //STRINGMATRIX_H
