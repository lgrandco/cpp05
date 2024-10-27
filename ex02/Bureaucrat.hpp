#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

class Bureaucrat;
#include "AForm.hpp"
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
    int getGrade() const;
    void upgrade();
    void downgrade();
    void setgrade(int);
    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw() { return ("Grade cannot be higher than 1"); };
    };
    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw() { return ("Grade cannot be lower than 150"); };
    };
    void executeForm(AForm const& form) const;
};

std::ostream& operator<<(std::ostream&, Bureaucrat&);

#endif
