#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "colors.hpp"

class Bureaucrat {
private:
    const std::string name;
    int grade;

public:
    Bureaucrat();
    Bureaucrat(const Bureaucrat&);
    Bureaucrat& operator=(const Bureaucrat&);
    ~Bureaucrat();
    std::string getName();
    int getGrade();
    void upgrade();
    void downgrade();
    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw() {
            return ("Problem exists between keyboard and chair");
        };
    }
};

#endif
