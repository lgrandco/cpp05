#ifndef AFORM_HPP
#define AFORM_HPP

class AForm;
#include "Bureaucrat.hpp"
#include "colors.hpp"
class AForm {
private:
    const std::string name;
    const int sign_grade;
    const int exec_grade;
    bool _signed;

public:
    AForm(/* args */);
    virtual ~AForm();
    AForm(const AForm&);
    AForm& operator=(const AForm&);
    AForm(std::string, int, int);

    void beSigned(Bureaucrat);
    int getSign_grade() const;
    int getExec_grade() const;
    const std::string& getName() const;
    bool isSigned() const;
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
    void execute(Bureaucrat const& executor) const;
    virtual void doTask() const = 0;
};

std::ostream& operator<<(std::ostream&, AForm&);

#endif // !AFORM_HPP
