#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "colors.hpp"

class Bureaucrat {
private:
    const std::string name;
    int grade;

public:
    Bureaucrat();
    Bureaucrat(std::string, int);
    Bureaucrat(const Bureaucrat&);
    Bureaucrat& operator=(const Bureaucrat&);
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
};

std::ostream& operator<<(std::ostream&, Bureaucrat&);

#endif
