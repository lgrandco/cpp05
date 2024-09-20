#ifndef FORM_HPP
#define FORM_HPP

#include "colors.hpp"
class Form {
private:
    const std::string name;
    int _signed;
    const int sign_grade;
    const int exec_grade;

public:
    Form(/* args */);
    ~Form();
};

#endif // !FORM_HPP
