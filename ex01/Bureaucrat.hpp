#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

class Form;
#include "Form.hpp"
#include "colors.hpp"

class Bureaucrat {
private:
    const std::string name;
    int grade;
    Bureaucrat& operator=(const Bureaucrat&);

public:
    Bureaucrat();
    Bureaucrat(std::string, int);
    Bureaucrat(const Bureaucrat&);
    ~Bureaucrat();
    std::string getName();
    int getGrade();
    void upgrade();
    void downgrade();
    void setgrade(int);
    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
    void signForm(Form& Form);
};

std::ostream& operator<<(std::ostream&, Bureaucrat&);

#endif
