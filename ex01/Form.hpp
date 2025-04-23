#ifndef FORM_HPP
#define FORM_HPP

class Bureaucrat;
#include "Bureaucrat.hpp"
#include "colors.hpp"
class Form {
private:
    const std::string name;
    const int sign_grade;
    const int exec_grade;
    bool _signed;

public:
    Form(/* args */);
    ~Form();
    Form(const Form&);
    Form& operator=(const Form&);
    Form(std::string, int, int);
    void beSigned(Bureaucrat);
    int getSign_grade();
    int getExec_grade();
    std::string getName();
    bool isSigned();
    class FormNotSignedException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
    class FormAlreadySignedException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream&, Form&);

#endif // !FORM_HPP
